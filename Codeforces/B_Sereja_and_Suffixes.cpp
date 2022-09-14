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

    cin>>n>>m;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>x;
        v[i] = x;
    }

    vector<int>pre(n+1);
    pre[0] = 0;
    reverse(v.begin(),v.end());
    map<int,int>mp;
    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        if(!mp[v[i]])
        {
            cnt++;
            pre[n-i] = cnt;
            mp[v[i]]++;
        }
        else{
            pre[n-i] = cnt;
        }

    }
    while(m--)
    {
        cin>>q;
        cout<<pre[q]<<endl;
    }


    exit(0);
}