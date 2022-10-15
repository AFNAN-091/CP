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
    string sss,ans;
    cin>>n>>m;
    set<string>st;
    while(n--)
    {
        string s;
        cin>>s;
        st.insert(s);
        auto ss = s;

        reverse(ss.begin(),ss.end());
        if(ss==s)
        {
            sss = s;
        }
        else if(st.count(ss)){
            ans+=s;
        }
    }

    auto ss = ans;
    reverse(ss.begin(),ss.end());
    ans+=sss+ss;
    cout<<ans.length()<<endl;
    cout<<ans<<endl;

    exit(0);
}