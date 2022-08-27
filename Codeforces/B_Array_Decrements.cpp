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
  vector<ll>a(n),b(n);
  for(auto &it: a)
  {
    cin>>it;
  }
  for(auto &it:b)
  {
    cin>>it;
  }
  if(n==1)
  {
    if(a[0]>=b[0])
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return;
  }
  bool flag = true;
  ll mx = 0;
  for(int i=0; i<n; i++)
  {
    if(a[i]<b[i])
    {
        flag = false;
        break;
    }
    mx = max(mx,a[i]-b[i]);
    // a[i] = a[i]-mx;
    
  }
  for(int i=0; i<n; i++)
  {
    a[i] = max(0ll,a[i]-mx);
    if(a[i]!=b[i])
    {
        flag = false;
        break;
    }
  }
  
  cout<<(flag?"YES":"NO")<<endl;
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