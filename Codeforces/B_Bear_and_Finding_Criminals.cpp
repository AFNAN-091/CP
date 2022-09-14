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

    cin>>n>>a;
    vector<ll>v(n+1);

    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
    }
    
    int i = a;
    int j = a;
    ll cnt = 0;
    while(i>0 and j<=n)
    {
        if(v[i]==1 and v[j]==1)
        {
            if(i==j)
            {
                cnt++;
                i--;
                j++;
                continue;
            }
            cnt+=2;           
        }
        i--;
        j++;
    }

    while(i>0)
    {
        if(v[i]==1)
        {
            cnt++;
        }
        i--;
    }
    while(j<=n)
    {
        if(v[j]==1)
        {
            cnt++;
        }
        j++;
    }

    cout<<cnt<<endl;

    exit(0);
}