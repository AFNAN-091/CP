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
  ll n,k;
  cin>>n>>k;
  string s;
  cin>>s;

  vi pre(n);
  pre.assign(pre.size(),0);

  pre[0] = 0;
  ll cnt = 0;
  for(int i=0; i<n; i++)
  {
    if(s[i] == '1')
    {
        cnt++;
    }
    pre[i] = pre[i]+cnt;
  }

  cout<<s<<endl;
  for(auto it: pre)
  {
    cout<<it;
  }
  cout<<endl;
  ll ans = 0;
  for(int i=0; i<n; i++)
  {
    if(s[i] == '0' and i-k>=0 and i+k<n)
    {
        ll a = pre[i+k] - pre[i];
        ll b = pre[i-k] - pre[i];

        if(a==0 and b== 0)
        {
            ans++;
        }
    }
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