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

    string s;
    cin>>s;
    //cout<<s<<endl;
    vector<int>pre(s.size());
    ll cnt = 0;
    pre[0] = 0;
    for(int i=1; i<s.size(); i++)
    {
        if(s[i]==s[i-1])
        {
            cnt++;          
        }
         pre[i] = cnt;
    }
    // for(auto it: pre)
    // {
    //     cout<<it<<" ";
    // }
    cin>>m;
    while(m--)
    {
        cin>>x>>y;
        x--;
        y--;
        cout<<pre[y]-pre[x]<<endl;

    }

    exit(0);
}