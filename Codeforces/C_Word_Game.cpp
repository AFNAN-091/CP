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
  vector<vector<string>>v(3);
  map<string , int>mp;
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<n; j++)
    {
        string s;
        cin>>s;
        v[i].push_back(s);
        mp[s]++;
    }
    
  }

    for(int i=0; i<3; i++)
    {
        ll val = 0;
        for(int j=0; j<n; j++)
        {
            if(mp[v[i][j]]==1)
            {
                val+=3;
            }
            else if(mp[v[i][j]]==2)
            {
                val++;
            }
        }
        cout<<val<<" ";
    }

    cout<<endl;

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