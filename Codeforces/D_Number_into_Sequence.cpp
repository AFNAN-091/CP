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

  vector<pair<ll,ll>>v;

  ll cnt = 0;

  for(ll i=2; i*i<=n; i++)
  {
    cnt = 0;
    while(n%i==0)
    {
        cnt++;
        n/=i;
    }
    if(cnt>0)
    {
        v.push_back({cnt,i});
    }
  }

  if(n>1)
    {
        v.push_back({1,n});
    }

  sort(v.begin(),v.end());

  reverse(v.begin(),v.end());

  vector<ll>ans;

  for(int i=0; i<v[0].first; i++)
  {
    ans.push_back(v[0].second);
  }

//   for(auto it:v)
//   {
//     cout<<it.first<<" "<<it.second<<endl;
//   }

  for(int i=1; i<v.size(); i++)
  {
    for(int j=0; j<v[i].first; j++)
    {
        ans[v[0].first-1]*=v[i].second;
    }
  }


  cout<<ans.size()<<endl;

  for(auto it: ans)
  {
    cout<<it<<" ";
  }
  cout<<endl;
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