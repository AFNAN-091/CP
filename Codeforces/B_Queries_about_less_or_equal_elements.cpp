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
    //ll a, b, c, d, e, f, g, h, k, len, n, m, p, q, r, t, x, y, z;

    ll n,m;
    cin>>n>>m;
    vector<ll>a(n),b(m);
    for(auto &it : a)
        cin>>it;

    for(auto &it: b)
        cin>>it;
    
    sort(a.begin(),a.end());
    for(int i=0; i<m; i++)
    {
         cout<<(upper_bound(a.begin(),a.end(),b[i])-a.begin())<<" ";   
    }

    exit(0);
}