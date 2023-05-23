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
#define clr(a) memset(a, 0, sizeof a)
#define reset(a) memset(a, -1, sizeof a)
#define FAsT ios_base::sync_with_stdio(false);cin.tie(NULL);
#define sz 50000
#define intmax INT_MAX
#define intmin INT_MIN
typedef long long ll;
typedef vector<long long> vi;
int rr[] = { -1, 1, 0, 0, -1, -1, 1, 1};
int cc[] = {0, 0, -1, 1, -1, 1, -1, 1};
/*--------------------------------------------------------------------*/

ll sum(ll n)
{
    ll val =0;
    while(n%10)
    {
        val+=(n%10);
        n/=10;
    }
    return val;
}

void AFnaN()
{
  ll n;
  cin>>n;
  if(n%2==0)
  {
    cout<<n/2<<" "<<n/2<<endl;
  }
  else{
    ll a  = n/2;
    ll b = a+1;
    ll e ,d;
     e = sum(a);
     d = sum(b);
    if(abs(e-d)<2)
    {
        cout<<a<<" "<<b<<endl;
        return;
    }
   
    ll c = a;
    a = max(a,b);
    b = min(b,c);
    while(abs(e-d)>1)
    {
        a--;
        b++;
        e = sum(a);
        d = sum(b);
        cerr<<"a="<<e<<"b="<<d<<endl;
    }
    cout<<a<<" "<<b<<endl;
    
   
    
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
//Solution submitted by: AFnaN, SUST CSE19