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
  ll n;
  cin>>n;
  
  ll a,b;

  cin>>a>>b;

  ll dis = b-a;
  ll rem = a-1;
  for(int i=2; i<=dis; i++)
  {
    ll c = dis/i;
    if(c==n)
    {

      for(int j=0; j<n; j++)
      {
        cout<<a<<" ";
        a+=i;
      }
      cout<<endl;
      break;
    }
    else if(c<n)
    {
      ll d = rem/i;
      if(c+d>=n)
      {
        for(int j=1; j<c; j++)
        {
          cout<<a<<" ";
          a+=i;
        }
        for(int i = c; i<n; i++)
        {
          cout<<b<<" ";
          b-=i;
        }
        cout<<b<<endl;
        break;
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