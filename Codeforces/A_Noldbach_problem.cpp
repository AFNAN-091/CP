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

    vector<int>prime;
    vector<int>check(n+1,false);
    check[0] = true;
    check[1] = true;
    for(int i=2; i<=n; i++)
    {
        if(!check[i])
        {
            for(int j = i*i; j<=n; j+=i)
            {
                check[j] = true;
            }
        }
    }

    for(int i=2; i<=n; i++)
    {
        if(!check[i])
        {
            prime.push_back(i);
        }
    }

    
    // for(auto it: prime)
    // {
    //     cout<<it<<" ";
    // }
    m = n-1;
    ll cnt = 0;
    for(int i=1; i<prime.size(); i++)
    {
        m = prime[i-1]+prime[i]+1;
       // cout<<m<<endl;
        if(m<=n and !check[m])
        {
            cnt++;
        }
    }

    if(k<=cnt)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    exit(0);
}