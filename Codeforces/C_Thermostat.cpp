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
typedef vector<long long> vi;
int rr[] = { -1, 1, 0, 0, -1, -1, 1, 1};
int cc[] = {0, 0, -1, 1, -1, 1, -1, 1};
/*--------------------------------------------------------------------*/

void AFnaN()
{
  ll a,b,l,r,x;
  cin>>l>>r>>x;
  cin>>a>>b;

  if(a==b)
  {
    cout<<0<<endl;
    return;
  }
  else if(abs(a-b)>=x)
  {
    cout<<1<<endl;
    return;
  }
  else if((abs(a - l) >= x and abs(l - b) >= x) or (abs(r - a) >= x and abs(r - b) >= x))
  {
    cout<<2<<endl;
    return;
  }
  else if((abs(a - r) >= x and  abs(l - r) >= x and abs(l - b) >= x) or (abs(a - l) >= x and abs(l - r) >= x and abs(r - b) >= x))
  {
    cout<<3<<endl;
    return;
  }
  else{
    cout<<-1<<endl;
    return;
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