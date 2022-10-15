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
    vector<int>v(n);
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        mp[x]++;
    }
    ll ans = mp[4];
    //cout<<ans<<endl;
    ans+=mp[3];
   // cout<<ans<<endl;
   ll two = mp[2]*2;
    mp[1] -= min(mp[1],mp[3]);
    ans+=(two/4);
    //cout<<ans<<endl;
    two%=4;
    
    two+=mp[1];
  //  cout<<mp[2]<<endl;
    ans+=ceil(two/4.0);
   // cout<<d<<endl;
    
    cout<<ans<<endl;

    exit(0);
}