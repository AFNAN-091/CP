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

void AFnaN()
{
  ll n,m;
  cin>>n>>m;
  vi v(n);
  map<ll,ll>mp;
  vi table;
  for(int i=0; i<n; i++)
  {
    ll x; 
    cin>>x;
    v[i] = x; 
    mp[x]++;
  }
  for(int i=0; i<m; i++)
  {
    ll x; 
    cin>>x;
    table.push_back(x);
  }
  vi demo;
  for(auto it: mp)
  {
    demo.push_back(it.second);
  }

  
  
  sort(demo.begin(),demo.end());
  reverse(demo.begin(),demo.end());
  sort(table.begin(),table.end());
  reverse(table.begin(),table.end());
  ll ans = 0;
  auto it1 = demo.begin();
  for(int i=0; i<m; i++)
  {
    auto it = find(table.begin(),table.end(),demo[i]);
    if(it != table.end() and it1!=demo.end())
    {
        table.erase(it);
        ans += demo[i];
        demo.erase(it1);
    }
    else{
        break;
    }
    it1++;
    
  }
  for(int i=0; i<table.size(); i++)
  {
    if(demo[i]<=table[i])
    {
        ans+=demo[i];
    }
    else{
        ans+=table[i];
    }
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