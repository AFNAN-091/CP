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
  ll x = 1999999973;
  ll y = 1999999943;
  vector<ll>v(n),ans;
  vector<vector<ll>>arekta;
  for(int i=0; i<n; i++)
  {
    cin>>v[i];
  }


  bool flag = true;

  for(int i=0; i<n-1; i++)
  {
    if(flag)
    {
        if(__gcd(v[i],v[i+1])==1)
        {
            continue;
        }
        ans.push_back(i+1);
        ans.push_back(i+2);
       /// cout<<ans.back()<<"dfa ";
       ans.push_back(x);
       ans.push_back(min(v[i],v[i+1]));
       arekta.push_back(ans);
       ans.clear();
       v[i+1] = min(v[i],v[i+1]);
       // cout<<ans.back()<<"fsdjf ";
        flag^=1;
    }

    else{
        if(__gcd(v[i],v[i+1])==1)
        {
            continue;
        }
        ans.push_back(i+1);
        ans.push_back(i+2);
        ans.push_back(y);
       // cout<<ans.back()<<endl;
        ans.push_back(min(v[i],v[i+1]));
        arekta.push_back(ans);
        ans.clear();
        v[i+1] = min(v[i],v[i+1]);
        // cout<<ans.back()<<endl;
        flag^=1;
    }

  }



  
  cout<<arekta.size()<<endl;
  for(auto it: arekta)
  {
    for(auto i : it)
    {
        cout<<i<<" ";
    }

    cout<<endl;
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