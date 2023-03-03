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
#define clr(a) memset(a, 0, sizeof a)
#define reset(a) memset(a, -1, sizeof a)
#define FAsT ios_base::sync_with_stdio(false);cin.tie(NULL);
#define sz 50000
#define intmax INT_MAX
#define intmin INT_MIN
typedef long long ll;
typedef vector<long long> vi;
int rr[] = { -1, 1, 0, 0, -1, -1, 1, 1};
int cc[] = {0, 0, -1, 1, -1, 1, -1, 1};
/*--------------------------------------------------------------------*/

bool compareInterval(pair<ll,ll> i1, pair<ll,ll> i2)
{
    if((i1.first + i1.second) == (i2.first + i2.second)) return i1.first<i2.first;
    return (i1.first + i1.second) < (i2.first + i2.second);
}

void AFnaN(){
    ll n,k; cin>>n>>k;
    vector<ll>a(n),b(n);
    vector<pair<ll,ll>>m(n);
    for(ll i=0; i<n; i++) cin>>a[i];
    for(ll i=0; i<n; i++) cin>>b[i];
    for(ll i=0; i<n; i++) m[i]={a[i],b[i]};
    
    sort(m.begin(),m.end(),compareInterval);

    ll mx=0,sum=0,i=0;
    while(i<n){
        if(m[i].first+m[i].second+sum<=k){
            sum+=m[i].first+m[i].second;
            mx=max(mx,m[i].second);
            i++;
        }
        else break;
    }
    vector<ll>mn(n);
    for(ll k=n-1;k>=0;k--){
        if(k==n-1) mn[k]=m[k].first;
        else mn[k]=min(mn[k+1],m[k].first);
    }
    ll ans=i;
    if(i<n){
        ll rem=k-sum;
        if(mn[i]<=rem)ans++;
        else if(rem+mx>=m[i].first+m[i].second){ans++;}
    }
    cout<<ans<<endl;
}

int main()
{   
    FAsT  
    ll a, b, c, d, e, f, g, h, k, len, n, m, p, q, r, t, x, y, z;

    cin >> t;

    while(t--)
    {
       AFnaN();    
    }

    exit(0);
}
//Solution submitted by: AFnaN, SUST CSE19