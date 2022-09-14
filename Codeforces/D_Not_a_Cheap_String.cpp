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
  ll p;
  cin>>p;
  ll sum = 0;
 // cout<<"ye";
  vector<vector<int>>v(26);

  for(int i=0; i<s.size(); i++)
  {
     int a = s[i]-'a';
     sum+=a+1;
   //  cout<<a<<" ";
     v[a].push_back(i);
  }
  //cout<<endl;

  vector<int>index(s.size(),false);
  for(int i=25; i>=0; i--)
  {
    while(sum > p and !v[i].empty())
    {
        index[v[i].back()] = true;
        v[i].pop_back();
        sum-=(i+1);
    }
  }

//   for(int i=0; i<s.size(); i++)
//   {
//     cout<<index[i]<<" ";
//   }
  //cout<<endl;

  for(int i=0; i<s.size(); i++)
  {
    if(!index[i])
    {
        cout<<s[i];
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