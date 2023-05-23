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

vi tree(400005);

void build(ll l, ll r, ll at,vector<ll>&v)
{
    if(l == r)
    {
        tree[at] = v[l];
        return;
    }

    ll mid = (l+r)/2;
    ll leftnode = at*2;
    ll rightnode = at*2 + 1;

    build(l,mid, leftnode,v);
    build(mid+1,r,rightnode,v);

    tree[at] = tree[leftnode] + tree[rightnode];


}


void update(ll val,ll ind, ll l, ll r, ll at)
{
    if(l == r)
    {
        tree[at] = val;
        return;
    }

    ll mid = (l+r)/2;
    ll leftNode = at*2;
    ll rightNode = at*2+1;
    if(ind<=mid)
        update(val,ind,l,mid,leftNode);
     else
        update(val,ind,mid+1,r,rightNode);
   
    tree[at] = tree[leftNode]+tree[rightNode];
}

ll query(ll l, ll r, ll lb, ll rb, ll at)
{
    if(l>rb or r<lb) return 0;

    else if(l<=lb and r>= rb) return tree[at];

    ll mid=(lb+rb)/2;
    ll leftNode = at*2;
    ll rightNode = at*2+1;
    ll s1 =  query(l,r,lb,mid,leftNode);
    ll s2 =  query(l,r,mid+1,rb,rightNode); 
    return s1+s2;
    
}

void AFnaN()
{
  ll n,q;
  cin>>n>>q;

  vi v(n);

  for(int i=0; i<n; i++)
  {
    cin>>v[i];
  }

  build(0,n-1,1,v);
  while(q--)
  {
    ll x;
    cin>>x;

    if(x==1)
    {
        ll ind;
        cin>>ind;
        cout<<query(ind,ind,0,n-1,1)<<endl;
        update(0,ind,0,n-1,1);
    }
    else if(x==2)
    {
        ll ind,val;
        cin>>ind>>val;
        ll temp = query(ind,ind,0,n-1,1);
        update(val+temp,ind,0,n-1,1);
    }
    else{
        ll l, r;
        // for(auto it: tree)
        // {
        //     cout<<it<<" ";
        // }
        // cout<<endl;
        cin>>l>>r;
        cout<<query(l,r,0,n-1,1)<<endl;
    }
  }
  tree.clear();
}

int main()
{   
    FAsT  
    ll a, b, c, d, e, f, g, h, k, len, n, m, p, q, r, t, x, y, z;

    cin >> t;
    c = 1;
    while(t--)
    {
       cout<<"Case "<<c++<<":"<<endl;
       AFnaN();
       
    }

    exit(0);
}