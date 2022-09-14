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
  string s;
  cin>>s;
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  map<int,int>mp;
  if(n<26)
  {
    cout<<"NO"<<endl;
    return;
  }
  else{
    for(int i=0; i<n; i++)
    {
        int a = s[i]-'a';
        mp[a]++;
    }
  }
  for(int i=0; i<26; i++)
  {
    if(!mp[i])
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

   // cin >> t;

    // while(t--)
    // {
       AFnaN();
       
  //  }

    exit(0);
}