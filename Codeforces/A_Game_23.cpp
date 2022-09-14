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
  
}

int main()
{   
    FAsT  
    ll a, b, c, d, e, f, g, h, k, len, n, m, p, q, r, t, x, y, z;

    cin>>n>>m;
    ll cnt = 0;
    d = m/n;
    x = y =0;
    if(m%n!=0)
    {
        cout<<-1<<endl;
        return 0;
    }
    while(d>1)
    {
        if(d%2==0)
        {
            d/=2;
            x++;
        }
        else if(d%3==0){
            d/=3;
            y++;
        }
        else 
            break;
    }

  //  cout<<x<<" "<<y<<endl;
    if(d==1)
    {
        cout<<x+y<<endl;
    }
    else{
        cout<<-1<<endl;
    }

    exit(0);
}