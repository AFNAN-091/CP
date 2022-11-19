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

void AFnaN()
{
  
}

int main()
{   
    FAsT  
    ll a, b, c, d, e, f, g, h, k, l, n, m, p, q, r, t, x, y, z;

    in(n);
    vi v(n);
    for(auto &it: v)
    {
        cin>>it;
    }

    vi pre(n+1);
    pre[0] = 0;
    for(int i=1; i<=n; i++)
    {
        pre[i] = pre[i-1]+v[i-1];
    }

    for(auto it: pre)
    {
        cerr<<it<<" ";
    }
    cerr<<endl;
    sort(v.begin(),v.end());
    vi sortt(n+1);
    sortt[0] = 0;
    for(int i=1; i<=n; i++)
    {
        sortt[i] = sortt[i-1] + v[i-1];
    }

    for(auto it: sortt)
    {
        cerr<<it<<" ";
    }
    cerr<<endl;

    in(q);
    while(q--)
    {
        cin>>t>>l>>r;

        if(t==1)
        {
            cout<<pre[r]-pre[l-1]<<endl;
        }
        else{
            cout<<sortt[r]-sortt[l-1]<<endl;
        }
    }

    exit(0);
}