//           * * ببسم الله الرحمن الرحيم    * *
// ********************@Author**************************************
//     ____     _____   __  _     ____     __  _
//    / __ \   | ____| |  \| |   / __ \   |  \| |
//   / /__\ \  | |__   | |\  |  / /__\ \  | |\  |
//  /_/    \_\ |_|     |_| \_| /_/    \_\ |_| \_|
 
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define lcm(a,b)    a*b/__gcd(a,b)
#define endl '\n'
#define yes cout<< "YES\n"
#define no cout<< "NO\n"
#define f(x) cout<< x <<endl
#define in(x) cin>> x 
#define er(x) cerr << x << endl
#define FAsT ios_base::sync_with_stdio(false);cin.tie(NULL);
#define sz 50000
#define intmax INT_MAX
#define intmin INT_MIN
typedef long long ll;
typedef vector<long long> vi;
int rr[] = { -1, 1, 0, 0, -1, -1, 1, 1};
int cc[] = {0, 0, -1, 1, -1, 1, -1, 1};
/*--------------------------------------------------------------------*/


ll tree[4*100000],pro[4*100000];


void init(ll n)
{
    for(int i=0; i<n*3; i++)
    {
        tree[i] = 0;
        pro[i] = 0;
    }
}

void update(ll node,ll b, ll e, ll i, ll j,ll val)
{
    if(i>e || j<b)
    {
        return;
    }

    if(b>=i and e<=j){
        tree[node]+=val;
        return;
    }

    ll mid = (b+e)/2;
    ll leftNode = (node*2)+1;
    ll rightNode = (node*2)+2;
    
    update(leftNode,b,mid,i,j,val);
     
    update(rightNode,mid+1,e,i,j,val);
   
    pro[node] = pro[leftNode] + pro[rightNode] + (mid-b+1)*tree[leftNode]+ (e-mid)*tree[rightNode];
    // cout<<pro[node]<<endl;
}


ll query(ll node , ll b, ll e, ll i, ll j)
{
    if(i>e || j<b)
    {
        return 0;
    }
    ll ans = 0;
    ans = (min(j,e)-max(i,b) +1) * tree[node];
    if(b>=i and e<=j)
    {
        ans+=pro[node];
        
    }
    ll leftNode = (node << 1)+1;
    ll rightNode = (node<<1)+2;

    ll mid = (e+b)>>1;

    ll p1 = query(leftNode, b, mid, i,j);
    ll p2 = query(rightNode, mid+1, e, i,j);

    return ans+=(p1+p2);
}


int main()
{   
    FAsT  
    ll a, b, c, d, e, f, g, h, k, len, n, m, p, q, r, t, x, y, z;

    cin>>t;
    while(t--)
    {
          cin>>n>>q;
          init(n);
          while(q--)
          {
                cin>>x;
                if(x==0)
                {
                    cin>>a>>b>>c;
                    //cout<<c<<endl;
                    update(0,1,n,a,b,c);

                }
                else{
                    cin>>a>>b;
                   //cout<<query(0,1,n,a,b)<<endl;
                }
          }

    }

    exit(0);
}