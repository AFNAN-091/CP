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
  vector<ll>v(n);
  ll arr[n];
  ll mx = 0;
  for(int i=0; i<n; i++)
  {
    cin>>arr[i];
    if(mx<arr[i])
    {
        mx = arr[i];
    }
    v[i] = mx;
  }
  ll pre[n+1];
  pre[0] = arr[0];

  v[0] = mx;
  for(ll i=1; i<n; i++)
  {
    pre[i] = pre[i-1]+arr[i];
    
  }
//   for(ll i=0; i<n; i++)
//   {
//     cout<<pre[i]<<" ";

//   }
//   cout<<endl;
  while(k--)
  {
    ll x;
    cin>>x;
    
    cerr<<x<<endl;
    auto it = upper_bound(v.begin(),v.end(),x);
    ll i = it- v.begin();
    if(i==0)
    {
        if(arr[0]>x)
        {
            cout<<0<<" ";
        }
        else{
            cout<<arr[0]<<" ";
        }
        continue;

    }
    i--;
    
    cout<<pre[i]<<" ";
    // if(i== and v[i]>x)
    // {
    //     cout<<0<<" ";
    // }
    // else{
    //     cout<<pre[i]<<" ";
    // }
  
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