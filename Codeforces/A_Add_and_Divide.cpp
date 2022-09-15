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
  ll a,b;
  cin>>a>>b;
  ll k = b;
  ll c = a;
  ll ans = INT_MAX;
  
  if(a<b)
  {
    cout<<1<<endl;
    return;
  }
 
  for(int i=0; i<30; i++)
  {
    ll cnt = 0;
    k = b+i;
    c = a;
    
    if(k==1)
    {
       // cout<<c<<" ";
        k++;
        cnt++;
       // ans = k;
    }

    while(c>0)
    {
        //cout<<c<<" ";
        c/=k;
        cnt++;
    }
  //  cout<<cnt<<" ";
    ans = min(ans,cnt+i);
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