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
  vector<vector<ll>>v(n);
  map<ll,ll>mp;
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n-1; j++)
    {
      ll x;
      cin>>x;
      v[j].push_back(x);
    }
  }
bool flag[n+1] = {0};
ll mx = *max_element(v[0].begin(),v[0].end());
ll mn = *min_element(v[0].begin(),v[0].end());
ll mx_cnt = count(v[0].begin(),v[0].end(),mx);
ll mn_cnt = count(v[0].begin(),v[0].end(),mn);
if(mx_cnt > mn_cnt)
{
  cout<<mx<<" ";
  flag[mx] =1;
}
else{
  cout<<mn<<" ";
  flag[mn] = 1;
}
for(int i=1; i<n-1; i++)
  {
          
      ll mx = *max_element(v[i].begin(),v[i].end());
      ll mn = *min_element(v[i].begin(),v[i].end());
      for(int k=0; k<n; k++)
      {
        if(v[i-1][k] == mx )
        {
          cout<<mx<<" ";
          flag[mx] = 1;
          break;
        }
        if(v[i-1][k] == mn)
        {
          cout<<mn<<" ";
          flag[mn] = 1;
          break;
        }
      } 
  }
  for(int i=1; i<=n; i++)
  {
    if(flag[i] == 0)
    {
      cout<<i<<endl;
      break;
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
//Solution submitted by: AFnaN, SUST CSE19