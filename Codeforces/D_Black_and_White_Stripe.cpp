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
  ll n,k;
  cin>>n>>k;
  string s;
  cin>>s;
  ll mn = k;
  ll cnt = 0;
  for(int i=0; i<k; i++)
  {
         if(s[i]=='W')
        {
            cnt++;
        }
  }
  mn = min(mn,cnt);
  int j = 0;
  for(int i=k; i<n; i++)
  {
    //cout<<i<<" ";
    if(s[i]=='W')
    {
        cnt++;
    }
    if(s[j]=='W')
    {
        cnt--;
        
    }
    j++;
    mn = min(mn,cnt);
  }
  cout<<mn<<endl;
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