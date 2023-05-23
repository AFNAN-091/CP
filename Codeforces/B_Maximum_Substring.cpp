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
  string s;
  cin>>s;
  ll a = count(s.begin(), s.end(),'0');
  ll b = count(s.begin(), s.end(), '1');
  ll d = 0;
  for(int i=0; i<s.size(); i++)
  {
    ll demo = 0;
    if(s[i] == '0')
    {
        while(s[i]=='0')
        {
            i++;
            demo++;
        }
        i--;
        d = max(d,demo);
    }
  }
  ll e =0;
   for(int i=0; i<s.size(); i++)
  {
    ll demo = 0;
    if(s[i] == '1')
    {
        while(s[i]=='1')
        {
            i++;
            demo++;
        }
        i--;
        e = max(e,demo);
    }
  }
  ll ans = 0;
  ll c = b*a;
  ans = max(ans,c);
  c  = d*d;
  ans = max(ans,c);
  c  = e*e;
  ans = max(ans,c);
  cout<<ans<<"\n";
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