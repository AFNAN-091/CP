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
  
}

int main()
{   
    FAsT  
    ll a, b, c, d, e, f, g, h, k, len, n, m, p, q, r, t, x, y, z;
    cin>>k;
    string s;
    cin>>s;
    string ans = "";
    map<char,int>mp;
    for(int i=0; i<s.size(); i++)
    {
        mp[s[i]]++;
    }

    for(auto it: mp)
    {        
      if(it.second%k!=0)
        {
            cout<<-1<<endl;
            return 0;
        }
        else {
            a = it.second/k;
            char cc = it.first; 
        //    cout<<a<<" "<< cc <<endl;
            for(int i=0; i<a; i++)
            {
              
                ans+=cc;
            }
        }
        
    }
    
    for(int i=0; i<k; i++)
    {
        cout<<ans;
    }
    cout<<endl;

    exit(0);
}