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
    map<ll,ll>mp;
    set<ll>s;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        v[i] = x;
        s.insert(x);
        mp[x]++;
    }
    sort(v.begin(),v.end());

    vector<ll>pre(n);
    ll cnt = 1;
    a = s.size();
    map<ll,ll>ans;
    
    for(auto it: s)
    {
        mp[it] = a - cnt;
        cnt++;
    }

    for(auto it: mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

   
    exit(0);
}