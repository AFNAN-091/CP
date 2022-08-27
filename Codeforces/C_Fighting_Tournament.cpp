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
int rr[] = { -1, 1, 0, 0, -1, -1, 1, 1};
int cc[] = {0, 0, -1, 1, -1, 1, -1, 1};
/*--------------------------------------------------------------------*/

void AFnaN()
{
  ll n,q;
  cin>>n>>q;
  vector<ll>v(n);
  for(auto &it: v)
  {
    cin>>it;
  }
  ll mx = 0;
  map<ll,ll>mp;
  vector<ll>demo;
  for(int i=1; i<n; i++)
  {
    mx = max({mx,v[i],v[i-1]});
    demo.push_back(mx);
    mp[mx]++;

  }
  while(q--)
  {
    ll i,k;
    cin>>i>>k;
    if(k<n)
    {
        auto it = lower_bound(demo.begin(),demo.end(),v[i-1]);
        auto it1 = upper_bound(demo.begin(),demo.end(),v[i-1]);
        ll d = distance(it,it1);
        if(k-distance(demo.begin(),it)<0)
        {
            cout<<0<<endl;
            continue;
        }
        cout<<min(d,k-distance(demo.begin(),it))<<endl;
    }
    else{
        if(v[i-1]==demo[n-2])
        {
            cout<<mp[v[i-1]]+(k-n+1)<<endl;
        }
        else{
            cout<<mp[v[i-1]]<<endl;
        }
    }
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