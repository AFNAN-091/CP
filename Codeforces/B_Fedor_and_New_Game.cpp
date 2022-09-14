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
  ll n,m,k;
  cin>>n>>m>>k;
  bitset<32> bt[m+1];
  for(int i=0; i<=m; i++)
  {
    int x; 
    cin>>x;
    bt[i] = x;
  }
 
  int ans = 0;
//   for(int i=0; i<=m; i++)
//     cout<<bt[i]<<endl;
  for(int i=0; i<m; i++)
  {
     int k_df = 0;
    for(int j=0; j<32; j++)
    {
        if(bt[m][j]!=bt[i][j])
        {
            k_df++;
        }
    }
    if(k_df<=k)
    {
        ans++;
    }
  }
  cout<<ans<<endl;
}

int main()
{   
    FAsT  
    ll a, b, c, d, e, f, g, h, k, len, n, m, p, q, r, t, x, y, z;

    //cin >> t;

    
       AFnaN();
       
  

    exit(0);
}