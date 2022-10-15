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
#define FAsT ios_base::sync_with_stdio(false);cin.tie(NULL);
#define sz 50000
typedef long long ll;
int rr[] = { -1, 1, 0, 0, -1, -1, 1, 1};
int cc[] = {0, 0, -1, 1, -1, 1, -1, 1};
/*--------------------------------------------------------------------*/

void AFnaN()
{
    ll n;
    cin>>n;
    vector<ll>v(n+1);
    ll sum ;
    for(int i = 1; i <= n; ++i){
      cin >> v[i];
    }
    ll result = INT_MAX;
    for(int i = 1; i <= n; ++i){
      sum = 0;
      for(int j = 1; j <= i; ++j){
        sum += v[j];
      }
      ll c = 0;
      ll mx = 0;
      ll x = 0;
      for(int j = 1; j <= n; ++j){
        x += v[j];
        c += 1;
        if(x == sum){
          if(j == n){
            result = min(result, max(mx, c));
          }
          else {
            mx = max(mx, 1ll * c);
            c = 0;
            x = 0;
          }

        }
        if(x > sum){
          break;
        }
      }
    }
    cout <<result << endl;
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