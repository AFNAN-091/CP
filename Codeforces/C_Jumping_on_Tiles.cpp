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
  string s;
  cin>>s;
 
  vector<int>v[26];
  for(int i=0; i<s.size(); i++)
  {
    v[s[i]-'a'].push_back(i);
  }
  vector<int>ans;
  if(s[0]-'a' >s[s.size()-1]-'a')
  {
    //cout<<s<<endl;
    //cout<<s[0]-'a';
    for(int i=(s[0]-'a'); i>=(s[s.size()-1]-'a'); i--)
    {
       // cout<<i<<" ";
        if(v[i].size()>0)
        {
            for(auto it: v[i])
            {
                ans.push_back(it);
            }
            
        }
    }
  }
  else{
    for(int i=s[0]-'a'; i<=(s[s.size()-1]-'a'); i++)
    {
        if(v[i].size()>0)
        {
            for(auto it: v[i])
            {
                ans.push_back(it);
            }
            
        }
    }
  }
  
  ll a = s[0]-'a';
  ll b = s[s.size()-1]-'a';
  cout<<abs(a-b)<<" "<<ans.size()<<endl;
  for(auto it: ans)
  {
    cout<<it+1<<" ";
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