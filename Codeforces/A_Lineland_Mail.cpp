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

    cin>>n;
    vector<ll>v(n+2);

    v[0] = INT_MAX;
    v[n+1] = INT_MAX;
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
    }
    for(int i=1; i<=n; i++)
    {
       if(i==1)
       {
        cout<<v[i+1]-v[i]<<" ";
       }
       else if(i==n)
       {
            cout<<v[i]-v[i-1]<<" ";
       }
       else{
         cout<<min(v[i+1]-v[i],v[i]-v[i-1])<<" ";
       }

       cout<<max(v[i]-v[1],v[n]-v[i])<<endl;
    }

    exit(0);
}