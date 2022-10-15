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

  vector<ll>a(n);
  vector<ll>test(n,0);
  
  bool pos = false;
  bool neg = false;

  for(int i=0; i<n; i++){
    ll x;
    cin>>x;
    a[i] = x;
    if(pos and neg)
    {
        test[i] = 2;
    }
    else if(pos)
    {
        test[i] = 1;
    }
    else if(neg)
    {
        test[i] = -1;
    }
    

    if(x>0)
    {
        pos = true;
    }
    else if(x<0)
    {
        neg = true;
    }
  }

  bool ans = false;

  for(int i=0; i<n; i++)
  {
    ll x;
    cin>>x;
    //cout<<x<<endl;
    if(x == a[i])
    {
        continue;
    }
    else if(test[i] == 2)
    {
        continue;
    }
    else if(x>a[i] and test[i]!=1)
    {
      //  cout<<"NO"<<endl;
        ans = true;
    }
    else if(x<a[i] and test[i] != -1)
    {
        //cout<<"NO"<<endl;
        ans = true;
    }
  }
  
  cout<<(ans?"NO":"YES")<<endl;
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