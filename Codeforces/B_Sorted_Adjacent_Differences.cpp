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
  vi v;

  deque<ll>q;

  for(int i=0; i<n; i++)
  {
    ll x;
    cin>>x;
    q.push_back(x);
  }

//   for(auto it: q)
//   {
//     cerr<<it<<" ";
//   }
//   cerr<<endl;

  sort(q.begin(),q.end());
  bool flag = true;
  while(!q.empty())
  {
    if(flag)
    {
        v.push_back(q.front());
        q.pop_front();
        flag^=1;
    }
    else{
        v.push_back(q.back());
        q.pop_back();
        flag^=1;
    }
  }

  reverse(v.begin(),v.end());
  for(auto it: v)
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