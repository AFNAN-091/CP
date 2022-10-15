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

    
    cin>>n;
    vector<ll>v(n);
    for(auto &it: v)
    {
        cin>>it;
    }

    map<ll , ll>mp;
    for(int i=0; i<n; i++)
    {
        if(v[i]==50)
        {
            if(mp[25])
            {
                mp[25]--;
                mp[50]++;
            }
            else{
                cout<<"NO"<<endl;
                return 0;
            }
        }
        else if(v[i]==100)
        {
            if(mp[50] and mp[25])
            {
                mp[50]--;
                mp[25]--;
            }
            else if(mp[25]>2)
            {
                mp[25]-=3;
            }
            else{
                cout<<"NO"<<endl;
                return 0;
            }
        }
        else{
            mp[25]++;
        }
    }

    cout<<"YES"<<endl;

    exit(0);
}