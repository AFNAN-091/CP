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

  //  cin >> t;

    cin>>n;
    set<ll>v;
     p = 1;
    for(ll i=1; i<n; i++)
    {
        if(__gcd(i,n)==1)
        {
            v.insert(i);
            p = (p*i)%n;
        }
    }
    if(p!=1){
        auto it = v.find(p);
        if(it!=v.end())
        {
            v.erase(it);
        }
    }
    cout<<v.size()<<endl;
    for(auto it: v)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    exit(0);
}