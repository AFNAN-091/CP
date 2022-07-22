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

bool check(ll x,ll y)
{
    if(((x%10) == (y/10)) && ((x/10)==(y%10))) return true;
    return false;
}
 
void AFnaN()
{
    ll x,y;
    char c;
    cin>>x>>c>>y;
    ll k;
    cin>>k;
    ll cnt=0;
    map<pair<ll,ll>,ll>mp;
    ll m=x;
    ll n=y;
 
    while(1){
        if(mp[{x,y}]>0) break;
        mp[{x,y}]=1;
        if(check(x,y)){
            cnt++;
        }
        y+=k;
        ll a=y/60;
        ll b=y%60;
        x+=a;
        y=b;
        x%=24;
    }
    cout<<cnt<<endl;
}

int main()
{   
    FAsT  
    ll a, b, c, d, e, f, g, h, k, len, n, m, p, q, r, t, x, y, z;

    cin >> t;

    while(t--)
    {
       AFnaN();
       
    }

    exit(0);
}