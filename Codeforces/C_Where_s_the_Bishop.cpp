
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
char no[] = {'N','O'};
int rr[] = { -1, 1, 0, 0, -1, -1, 1, 1};
int cc[] = {0, 0, -1, 1, -1, 1, -1, 1};
char yes[] = {'Y','E','S'};
/*--------------------------------------------------------------------*/

void AFnaN()
{
  string s[8];
  for(int i=0; i<8; i++)
  {
      cin>>s[i];
  }
  for(int i=0; i<8; i++)
    {
        for(int j =0; j<8; j++)
        {
            if(s[i][j]=='.')
            {
                continue;
            }
            else{
                if(s[i-1][j-1]=='#' and s[i-1][j+1]=='#' and s[i-1][j+1]=='#' and s[i+1][j+1]=='#')
                {
                    cout<<i+1<<" "<<j+1<<endl;
                    return;
                }
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