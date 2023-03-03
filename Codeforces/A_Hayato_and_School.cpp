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

void AFnaN()
{
  ll n;
  cin>>n;
  vi v(n);
  ll cnt = 0;
  vi ans(n+1);
  vi even;
  ll a = 0;
  for(int i=0; i<n; i++)
  {
    ll x; 
    cin>>x;
    v[i] = x;
    if(x%2==0)
    {
        even.push_back(i+1);
        a++;
    }
    else
    {
        ans[cnt] = i+1;
        cnt++;
    }
  }
  if(cnt>=3)
  {
    cout<<"YES"<<endl;
    for(int i=0; i<3; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
  }
  else if( cnt>=1 and even.size()>1)
  {
    cout<<"YES"<<endl;
   // cout<<"dfs";
    cout<<ans[0]<<" "<<even[0]<<" "<<even[1]<<endl;
   
  }
  else{
    cout<<"NO"<<endl;
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