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
  vi v(n*n);
  map<ll,ll> mp;
  ll val = 0;
  ll in = 1;
  for(int i=0; i<n*n; i++)
  {
    if(val>n*n)
    {
        
        while(i<n*n and val>0)
        {
            in = 1;
            val-=in;
            
            if(!mp[val])
            {
                v[i] = val;
                mp[val]++;
                i++;
            }
            in++;
        }
    }
    else{
        while(val<=n*n and i<n*n)
        {
            val+=in;
            if(!mp[val])
            {
                v[i] = val;
                cerr<<v[i]<<"f ";
                mp[val]++;
                i++;
            }
            cerr<<val<<endl;
            in++;
        }
        
    }
    
  }
  ll cnt = 1;
  for(int i=0; i<n; i++)
  {
    cout<<v[i]<<" ";
    cnt++;
    if(cnt%n==0)
    {
        cout<<endl;
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