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
  for(auto &it: v)
  {
    cin>>it;
  }
  ll pos = 0;
  for(int i=0; i<n; i++)
  {
    if(v[i]>0)
    {
        //cout<<v[i]<<" "<<i<<endl;
        pos+=v[i];
        v[i] = 0;
    }
    else{
        v[i]*=-1;
        if(pos>=v[i])
        {
           // cout<<pos<<" ";
            pos-=v[i];
            v[i] = 0;
        }
        else{
            v[i]-=pos;
            pos = 0;
        }
    }
  }
  cout<<pos<<endl;
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