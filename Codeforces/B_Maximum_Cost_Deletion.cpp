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
  ll n,a,b;
  cin>>n>>a>>b;
  string s;
  cin>>s;
  ll x = n*a;
  ll cnt = 0;
  ll z = 0;
  if(b>0)
  {
    cout<<x+n*b<<endl;
    return;
  }
  for(int i=0; i<n; i++)
  {
    
    if(s[i]=='0')
    {
        while(s[i]=='0' and i<n)
        {
            i++;
            z++;
        }
        cnt++;
    }    
    
  }
  if(z!=n) cnt++;

  ll cnt1 = 0;
  z = 0;

  for(int i=0; i<n; i++)
  {
    
    if(s[i]=='1')
    {
        while(s[i]=='1' and i<n)
        {
            i++;
            z++;
        }
        cnt1++;
    }    
    
  }
  if(z!=n) cnt1++;

  ll y= min(cnt,cnt1);
  cout<<x+b*y<<endl;
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