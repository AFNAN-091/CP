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
    vector<ll>v(n),pre(n+1),rev(n+1);
    for(auto &it:v)
    {
        cin>>it;
    }
    // for(auto it: v)
    // {
    //     cout<<it<<" ";
    // }
    ll sum = 0;
    pre[0] = 0;
    for(int i=0; i<n-1; i++)
    {
        if(v[i]>v[i+1])
        {           
            sum+=(v[i]-v[i+1]);           
        }
       // cout<<sum<<endl;
        pre[i+1] = sum;
    }
    sum =0;
    rev[n-1] = 0;
    for(int i=n-1; i>=0; i--)
    {
        if(v[i]>v[i-1])
        {           
            sum+=(v[i]-v[i-1]);           
        }
       // cout<<sum<<endl;
        rev[i-1] = sum;
    }
    
//     for(auto it: pre)
//     {
//         cout<<it<<" ";
//     }
//    cout<<endl;
    while(m--)
    {
        int x, y;
        cin>>x>>y;
        if(y>x)
        {
            cout<<pre[y-1]-pre[x-1]<<endl;
        }
        else{
            cout<<rev[y-1]-rev[x-1]<<endl;
        }
        
    }

    exit(0);
}