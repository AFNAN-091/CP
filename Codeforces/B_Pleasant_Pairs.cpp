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
  map<long ,long>mp;

  for(int i=1; i<=n; i++)
  {
    ll x; 
    cin>>x;
    mp[x] = i;
  }

//  for(auto it:mp)
//  {
//     cout<<it.first<<" "<<it.second<<endl;
//  }
 ll cnt = 0;

  for(ll i=1; i<=2*n; i++)
  {
    for(ll j= i+1; j<=2*n; j++)
    {
        if(j*i>2*n)
        {
            break;
        }
        else if(!mp[i] || !mp[j])
        {
            continue;
        }
        else if((i*j) == (mp[i] + mp[j]))
        {
            cnt++;
        }
    }
  }


  cout<<cnt<<endl;


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