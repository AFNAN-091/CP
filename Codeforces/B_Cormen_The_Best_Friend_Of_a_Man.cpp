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

    cin>>n>>k;
    vector<int>v(n);

    for(auto &it: v)
    {
        cin>>it;
    }
    ll extra = 0;
    vector<int>ans;
    ans.push_back(v[0]);
    for(int i=1; i<n; i++)
    {
        if(v[i-1]+v[i]>=k)
        {
          //  ans.push_back(v[i-1]);
            ans.push_back(v[i]);
            continue;
        }
        else{
           // cout<<v[i-1]<<endl;
            ll a = k-(v[i-1]+v[i]);
           // cout<<i<<" "<<a<<endl;
            extra+=a;
            //ans.push_back(v[i-1]);
            ans.push_back(v[i]+a);
            v[i] = v[i]+a;
        }
    }

    cout<<extra<<endl;
    for(auto it: ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    exit(0);
}