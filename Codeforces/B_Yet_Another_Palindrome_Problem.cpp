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
  map<int,vector<int>>mp;
  for(auto &it: v)
  {
    cin>>it;
  }
  for(int i=0; i<n; i++)
  {
    if(mp[v[i]].size()!=0)
    {
        if(v[i-1]!=v[i] or (i+1<n and v[i+1]==v[i]))
        {
            mp[v[i]].push_back(i+1);
        }
    }
    else{
        mp[v[i]].push_back(i+1);
    }
  }
  for(auto it : mp)
  {
    if(it.second.size()>1)
    {
       // cout<<it.first<<" "<<it.second.size()<<endl;
        cout<<"YES"<<endl;
        return;
    }
  }
  cout<<"NO"<<endl;
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