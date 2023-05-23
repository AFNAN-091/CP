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
  ll n,k;
  cin>>n>>k;
  map<ll,ll>mp;
  ll mx = 1;
  for(int i=1; i<=n; i++)
    {
        ll x;
        cin>>x;
        mp[x]++;
        if(x>mx)
        {
            mx = x;
        }
    }


  ll ans = 0;
  ll cnt1 = 0;
  ll cnt = 0;
  ll ans2 = 0;
  ll mx1 = mx;
  for(int i=n*2; i>0; i--)
    {     
        if(mp[i]>0)
        {
           // cout<<mp[i]<<" ";
            continue;
        }
        if(cnt1>=k)
        {
            break;
        }
        cnt1++;
        if(mx1<i)
        {
            mx1 = i;
        }
        ans2 += mx1- i;
        

    }
    for(int i=1; i<=n*2; i++)
    {        
        if(mp[i]>0)
        {
           // cout<<mp[i]<<" ";
            continue;
        }
        if(cnt>=k)
        {
            break;
        }
        cnt++;
        if(mx<i)
        {
            mx = i;
        }
        ans += mx- i;
        

    }
  //  cout<<ans<<" "<<ans2<<endl;
    cout<<max(ans,ans2)<<endl;
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