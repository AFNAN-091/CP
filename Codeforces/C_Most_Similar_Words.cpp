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
  ll n,m;
  cin>>n>>m;
  vector<string>v(n);
  for(int i=0; i<n; i++)
  {
    string s;
    cin>>s;
    v[i] = s;
  }
  ll ans = INT_MAX;
  for(int i=0; i<n; i++)
  {
    for(int j=i+1; j<n; j++)
    {
        ll val = 0;
        for(int k=0; k<m; k++)
        {
            val +=(abs(v[i][k]-v[j][k]));
        }

        if(ans>val)
        {
            ans = val;
        }
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