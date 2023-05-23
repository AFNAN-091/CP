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


int main()
{   
    FAsT  
    ll a, b, c, d, e, f, g, h, k, len, n, m, p, q, r, t, x, y, z;

    ll day,time;
    cin>>day>>time;
    vector<pair<ll,ll> >v;
    ll mn,mx;
    mn = mx = 0;
    for(int i=0; i<day; i++)
    {
        cin>>x>>y;
        v.push_back(make_pair(x,y));
        mn += x;
        mx += y;
    }

    cerr<<mx<<" "<<mn<<endl;

    if(time>mx or time<mn)
    {
        cout<<"NO\n";
        
        return 0;
    }

    //cerr<<mx<<" "<<mn<<endl;
    cout<<"YES"<<endl;
    ll remain = 0;
    
    while(mx>time)
    {
        mx--;
        //cerr<<" "<<mx;
        for(int i=0; i<day; i++)
        {
            if(v[i].first<v[i].second)
            {
                v[i].second--;              
                break;
            }
        }  
        
    }

    ll cnt = 0;
    for(int i=0; i<day; i++)
    {
        cnt+=v[i].second;
        cout<<v[i].second<<" ";
    }
    cerr<<cnt<<endl;

    cout<<endl;





    exit(0);
}