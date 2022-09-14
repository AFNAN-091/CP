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
  ll cnt = 0;
  if(a==b)
  {
    cout<<0<<endl;
    return;
  }
  
  else if(a>b)
  {
    while(a>b)
    {
        if(a%8==0 and a/8>=b)
        {
            a/=8;
        }
        else if(a%4==0 and a/4>=b)
        {
            a/=4;
        }
        else if(a%2==0 and a/2>=b)
        {
            a/=2;

        }
        else {
            cnt = -1;
            break;
        }
        cnt++;
    }
  }
  else{
    while(a<b)
    {
        if( a*8<=b)
        {
            a*=8;
        }
        else if(a*4<=b)
        {
            a*=4;
        }
        else if(a*2<=b)
        {
            a*=2;

        }
        else {
            cnt = -1;
            break;
        }
        cnt++;
    }
    
  }
  if(a==b)
  {
    cout<<cnt<<endl;
  }
  else 
     cout<<-1<<endl;
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