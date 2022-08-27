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
  ll ans = 0;
  int x1,y1,nx,ny;
  x1 = y1 = nx = ny = 0;
  while(n--)
  {
    int x,y;
    cin>>x>>y;
    if(x==0)
    {
        if(y>0 and y1<y)
        {
            y1 = y;
        }
        else if(y<0 and ny>y)
        {
            ny = y;
        }
        
    }
    else
    {
        if(x>0 and x1<x)
        {
            x1 = x;
        }
        else if(x<0 and nx>x)
        {
            nx = x;
        }
        
    }
  }
  cout<<abs(nx*2)+abs(ny*2)+x1*2+y1*2<<endl;
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