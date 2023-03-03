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

vi fun;

void AFnaN()
{
  ll n;
  cin>>n;
  vi v(n);

  for(auto &it: v)
  {
    cin>>it;
  }

  vector<pair<ll,ll>>vv;
  for(int i=0; i<n; i++)
  {
    auto it = lower_bound(fun.begin(), fun.end(),v[i]);
    ll a = it-fun.begin();
    
    ll ans = abs(v[i]-fun[a]);
    vv.push_back(make_pair(i+1,ans));
  }
     
  cout<<vv.size()<<endl;

  for(auto it: vv)
  {
    cout<<it.first<<" "<<it.second<<endl;
  }
}

void init()
{
    ll x = 1;
    while(x<1e18)
    {
        x = x<<1;
        fun.push_back(x);
    }.1=0
}

int main()
{   
    FAsT  
    ll a, b, c, d, e, f, g, h, k, len, n, m, p, q, r, t, x, y, z;

    cin >> t;
    init();
    while(t--)
    {
       AFnaN();    
    }

    exit(0);
}
//Solution submitted by: AFnaN, SUST CSE19