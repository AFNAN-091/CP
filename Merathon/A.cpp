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
#define yes cout<< "YES\n"
#define no cout<< "NO\n"
#define f(x) cout<< x <<endl
#define in(x) cin>> x 
#define er(x) cerr << x << endl
#define FAsT ios_base::sync_with_stdio(false);cin.tie(NULL);
#define sz 50000
#define intmax INT_MAX
#define intmin INT_MIN
typedef long long ll;
typedef vector<long long> vi;
int rr[] = { -1, 1, 0, 0, -1, -1, 1, 1};
int cc[] = {0, 0, -1, 1, -1, 1, -1, 1};
/*--------------------------------------------------------------------*/

void update(vector<ll>&v,ll st, ll en,ll val,ll ind)
{
    if()
}

int main()
{   
    FAsT  
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,q;
        cin>>n>>q;

        vi v(n);
        for(auto &it: v)
        {
            cin>>it;
        }
        while(q--)
        {
            ll x;
            cin>>x;
            if(x==1)
            {
                ll ind;
                cin>>ind;
                v[ind] = 0;
            }
            else if(x==2)
            {
                ll ind,v;
                cin>>ind>>val;
                update(v,0,n-1,val,ind);
            }
            else{

            }
        }
    }

    exit(0);
}