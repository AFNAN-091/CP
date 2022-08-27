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
  int mn = INT_MAX;
  for(auto &it:v)
  {
    cin>>it;
  //  cout<<it<<endl;
    if(mn>it)
    {
      mn = it;
    }
   // cout<<mn<<endl;
  }
 
  vector<int>index;
  index = v;
  sort(index.begin(),index.end());
  //cout<<index.size();
  for(int i=0; i<n; i++)
  {
    if(index[i]!=v[i]  and ( (__gcd(v[i],mn)!=mn) or __gcd(index[i],mn)!=mn))
    {
      cout<<"NO"<<endl;
      return;
    }
  }

  cout<<"YES"<<endl;

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