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
  if(n<=9)
  {
    cout<<n<<endl;
    return;
  }
  int digit = 9;
  map<int,int>mp;
  while(n>9)
  {
    // if(mp[digit])
    // {
    //     digit--;
    //     continue;
    // }
    n-=digit;
    mp[digit--]++;
    
  }
  while(n>0 and digit>0)
  {
   // cout<<n<< " "<<digit<<endl;
    if(mp[digit] or digit>n)
    {
        digit--;
        continue;
    }
    mp[digit]++;
    n-=digit;
    digit--;
  }
  
  for(auto it: mp)
  {
    if(it.second>0)
    {
        cout<<it.first;
    }
    
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