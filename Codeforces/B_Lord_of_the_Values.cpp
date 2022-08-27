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

  vector<pair<int,pair<int,int> > >p;
  for(int i=1; i<n; i+=2)
  {
    if(v[i]!=v[i-1])
    {
        // 1 2 1 1 2 1
        p.push_back({1,{i,i+1}});
        p.push_back({2,{i,i+1}});
        p.push_back({1,{i,i+1}});
        p.push_back({1,{i,i+1}});
        p.push_back({2,{i,i+1}});
        p.push_back({1,{i,i+1}});
    }
    else{
        //2 2 1 1
        p.push_back({2,{i,i+1}});
        p.push_back({2,{i,i+1}});
        p.push_back({1,{i,i+1}});
        p.push_back({1,{i,i+1}});
    }
  }


  cout<<p.size()<<endl;
  for(auto it: p)
  {
    cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;;
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