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
  map<ll, ll, greater<ll>> mp;
  for(int i=0; i<n; i++)
  {
    ll x;
    cin>>x;
    mp[x]++;
  }
  bool flag = true;
  ll a,b;
  a = b =0;
  auto it1 = mp.begin();
  ll pre = it1->second;
  for(auto it: mp)
  {
    if(it.second%2)
    {
        flag = false;
        break;
    }
    // if(it.second<pre)
    // {
    //     break;
    // }
    // if(flag and it.second>0 and it.second%2==0)
    // {
    //    a+=it.second;
    //    b+=it.second;
    // }
    // else if(flag and it.second>0 and it.second%2==1)
    // {
    //     a+=it.second;
    //     flag^=1;
    // }
    // else if(!flag and it.second>0 and it.second%2==0)
    // {
    //     a+=it.second;
    //     b+=it.second;
    // }
    // else if(!flag and it.second>0 and  it.second%2==1)
    // {
    //     b+=it.second;
    //     flag^=1;
    // }
    // pre = it.second;

  }
  if(flag)
  {
    cout<<"Zenyk"<<endl;
  }
  else{
    cout<<"Marichka"<<endl;
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