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



int main()
{   
    FAsT  
    ll a, b, c, d, e, f, g, h, k, len, n, m, p, q, r, t,v, x, y, z;

    cin>>n>>v;
    
    map<ll,ll>mp;
    for(int i=1; i<=n; i++)
    {
        cin>>a;
        vector<ll>vec(a);
        for(int i=0; i<a; i++)
        {
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());
        mp[i] = vec[0];
        vec.clear();
    }
    vector<ll>ans;
    ll result = 0;
    for(int i=1; i<=n; i++)
    {
        if(mp[i]<v)
        {
            ans.push_back(i);
            result++;
        }
    }
    sort(ans.begin(),ans.end());
    cout<<result<<endl;
    for(auto it: ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;


    exit(0);
}