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
#define FAsT ios_base::sync_with_stdio(false);cin.tie(NULL);
#define sz 50000
typedef long long ll;
ll rr[] = { -1, 1, 0, 0, -1, -1, 1, 1};
ll cc[] = {0, 0, -1, 1, -1, 1, -1, 1};
/*--------------------------------------------------------------------*/

void AFnaN()
{
  ll n,q;
  cin>>n>>q;
  vector<vector<ll>>v(1005);
  vector<vector<ll>>v1(1005);
  for(ll i=0; i<n; i++)
  {
    ll a,b;
    cin>>a>>b;
    v[a].push_back(b);
  }

  for(ll i=1; i<=1000; i++)
  {
    sort(v[i].begin(),v[i].end());
  }
  for(ll i=1; i<=1000; i++)
  {
    for(ll j=0; j<v[i].size(); j++)
    {
        v1[i].push_back(v[i][j]);
    }
  }
  for(ll i=1; i<=1000; i++)
  {
    for(ll j=1; j<v[i].size(); j++)
    {
        v1[i][j]+=v1[i][j-1];
    }
  }
  while(q--)
  {
    ll hs,ws,hb,wb;
    cin>>hs>>ws>>hb>>wb;
    ll val = 0;
    for(ll i=hs+1; i<hb; i++)
    {
        auto it = upper_bound(v[i].begin(),v[i].end(),ws)-v[i].begin();
        auto it1 = lower_bound(v[i].begin(),v[i].end(),wb)-v[i].begin();
        it1--;
        if(it1>=0)
        {
            val+=(i*(v1[i][it1]-(it?v1[i][it-1]:0)));
            
        }
       
    }
     cout<<val<<endl;
  }
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