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

bool coprime(ll a, ll b)
{
    
     
    if ( __gcd(a, b) == 1)
        return true;
    else
        return false;       
}


void AFnaN()
{
  ll n;
  cin>>n;
  vector<ll>v(n);
  map<ll,ll>mp;
  for(int i=1; i<=n; i++)
  {
    ll x;
    cin>>x;
    mp[x] = i;
  }
  ll ans = -1;
  for(auto it: mp)
  {
    for(auto j: mp)
    {
        if(coprime(it.first,j.first))
        {
            ans = max(ans, it.second + j.second);
        }
    }
  }

  cout<<ans<<endl;
  //sort(v.begin(),v.end());

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