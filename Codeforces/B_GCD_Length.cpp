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
         int a,b,c;
        cin >> a >> b >> c;
        ll x=1;
        for(int i=0;i<c;i++)
            x*=10;
        x--;
        ll va=x;
        ll vb=x;
        for(int i=c;i<a;i++)
            va*=10;
        for(int i=c;i<b;i++)
            vb*=10;
        if(a>b)
        {
            if(b!=c)
                vb-=x;
        }
        else
        {
            if(a!=c)
                va-=x;
        }
        cout << va << ' ' << vb << '\n';
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