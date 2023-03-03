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

void func(vector<ll>&v,ll ind)
{
  ll sum = 0;
  ll a = v[ind];

  while(a)
  {
    sum+=a%10;
    a/=10;
  }
  v[ind] = sum;
}


void AFnaN()
{
  ll n,q;
  cin>>n>>q;
  vi v(n);
  set<ll>s;
  for(int i=0; i<n; i++)
  {
    cin>>v[i];
    s.insert(i);
  }
  while(q--)
  {
    ll x;
    cin>>x;
   // cout<<x<<" d ";
    if(x==1)
    {
      ll l,r;
      cin>>l>>r;
      l--;
      auto it = s.lower_bound(l);
      while(it!=s.end() and (*it)<r){
          func(v,*it);
          if(v[*it]<=9) it =s.erase(it);
          else it++;
      }
    }
    else{
      cin>>x;
      x--;
      cout<<v[x]<<endl;;
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