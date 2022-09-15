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
  int arr[n][m];
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m; j++)
    {
        cin>>arr[i][j];
    }
  }
  ll ans = 0;
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m; j++)
    {
        int a = i;
        int b = j;
        int c = 1;
        ll temp = arr[a][b];
        
        while(a-c>=0 or a+c<n or b-c>=0 or b+c<m)
        {
            if(a-c>=0 and b-c>=0)
            {
                temp+=arr[a-c][b-c];
            }
            if(a+c<n and b-c>=0)
            {
                temp+=arr[a+c][b-c];
            }
            if(a-c>=0 and b+c<m)
            {
                temp+=arr[a-c][b+c];
            }
            if(a+c<n and b+c<m)
            {
                temp+=arr[a+c][b+c];
            }
            c++;
        }

        ans = max(ans,temp);
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