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
  vector<int>v(n+3),pre(n+3);
  pre[0] = 0;
  for(int i=1; i<=n; i++)
  {
    cin>>v[i];
  }


  for(int i=1; i<=n; i++)
  {
    pre[i] = pre[i-1]^v[i];
  }

  // partition 2
  bool ok = false;
  for(int i=1; i<=n; i++)
  {
    int a = pre[i];
    int b = pre[n]^pre[i];
    if(a==b)
    {
        ok = true;
        break;
    }
  }
 

 // partition 3
  for(int i=1; i<=n; i++)
  {
    int a = pre[i];
    for(int j=i; j<=n; j++)
    {
        int b = pre[i]^pre[j];
        int c = pre[n]^pre[j];
        if(a==b and b==c)
        {
            ok = true;
            break;
        }
    }
  }

  
  if(ok)
  {
    cout<<"YES"<<endl;
  }

  else{
    cout<<"NO"<<endl;
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