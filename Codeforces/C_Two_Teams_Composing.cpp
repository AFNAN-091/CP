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
  ll n;
  cin>>n;
  map<ll,ll>mp;
  vector<ll>v(n);

  for(int i=0; i<n; i++)
  {
    int x;
    cin>>x;
    mp[x]++;
    v[i] = x;
  }
  vector<int>first;
  ll ind = 0;
  ll mn1 = 0;
  for(int i=0; i<n; i++)
  {      
    if(mn1<mp[v[i]])
    {
        mn1 = max(mn1,mp[v[i]]);
        ind = v[i];
    }     
  }
  ll mn = mp.size()-1;
  

  if(mn==0 and v.size()>1)
  {
    cout<<1<<endl;
  }
  else if(mn1-mn>1)
  {
    cout<<min(mn,mn1)+1<<endl;
  }
  else{
    cout<<min(mn,mn1)<<endl;
  }
 // cout<<mn<<endl;
 
  
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