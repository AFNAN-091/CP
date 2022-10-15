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

    cin>>n>>k;
    vector<ll>v(n);
    for(auto &it : v)
    {
        cin>>it;
    }
    ll height = 0;
    for(int i=0; i<k; i++)
    {
        height+=v[i];
    }
    m = height;
    //cout<<m<<endl;
    ll ind = 0;
    for(int i=k; i<n; i++)
    {
        height+=v[i];
        //cout<<height<<endl;
      //  cout<<i<<" "<<i-k<<endl;
        height-=v[i-k];
       // cout<<height<<endl;
     //   cout<<m<<endl;
        if(m>height)
        {
            m = height;
            ind = i-k+1;
        }
    }

    cout<<ind+1<<endl;

    exit(0);
}