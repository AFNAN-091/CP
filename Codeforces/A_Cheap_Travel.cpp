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
#define yes cout<< "YES\n"
#define no cout<< "NO\n"
#define f(x) cout<< x <<endl
#define in(x) cin>> x 
#define er(x) cerr << x << endl
#define FAsT ios_base::sync_with_stdio(false);cin.tie(NULL);
#define sz 50000
#define intmax INT_MAX
#define intmin INT_MIN
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
    ll  d, e, f, g, h, k, len, n, m, p, q, r, t, x, y, z;
    float a,b;
    cin>>n>>m>>a>>b;

   float  c = b/m;
    er(c);
    if(c<a)
    {
        e = (n/m)*b;
        if(n%m==0)
        {
            cout<<e<<endl;
        }
        else{
            d = e + (n%m)*a;
            e+=b;
            cout<<min(d,e)<<endl;
        }
    }
    else{
        f = n*a;
        cout<<f<<endl;
    }

    exit(0);
}