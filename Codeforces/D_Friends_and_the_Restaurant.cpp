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
  vector<int>v(n);

    for(int i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        v[i]-=x;
    }

    for(int i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        v[i]+=x;
    }

    sort(v.begin(),v.end(),greater<int>());
    
    ll l =0 , r = n-1;
    ll ans = 0;
    while(l<r)
    {
        if(v[l]>0 and v[r]>0)
        {
            ans++;
            l++;
            r--;
        }
        else if(v[l]>=abs(v[r])){
            ans++;
            l++;
            r--;
        }
        else{
            r--;
        }
    }
    cout<<ans<<endl;

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