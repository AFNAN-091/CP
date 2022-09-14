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
  string a,b;
  cin>>a>>b;
  ll n = a.size();
  ll m = b.size();
 
  ll dp[n+1][m+1];
  ll ans = 0;
  for(int i=0; i<=n; i++)
  {
    for(int j=0; j<=m; j++)
    {
        if(i==0 or j==0)
        {
            dp[i][j] = 0;
        }
        else if(a[i-1]==b[j-1])
        {
          //  cout<<a[i-1]<<" ";
            dp[i][j] = dp[i-1][j-1]+1;
          //  cout<<a[i-1]<<" ";
        }
        else{
            dp[i][j] = 0;         
        }
        ans = max(ans,dp[i][j]);
    }
  }

//   for(int i=0; i<=n; i++)
//   {
//     for(int j=0; j<=m; j++)
//     {
//         cout<<dp[i][j]<<" ";
//     }
//     cout<<endl;
//   }

  
  cout<<(n+m)-(ans*2)<<endl;  
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