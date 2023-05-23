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
#define intmax INT_MAX
#define intmin INT_MIN
typedef long long ll;
typedef vector<long long> vi;
int rr[] = { -1, 1, 0, 0, -1, -1, 1, 1};
int cc[] = {0, 0, -1, 1, -1, 1, -1, 1};
/*--------------------------------------------------------------------*/

#define sz 5000002

int phi[sz];
unsigned long long sum[sz];


void init()
{
  for(ll i = 2; i<=sz; i++)
    phi[i] = i;
  for(int i=2; i<=sz; i++)
  {
    if(phi[i]==i)
    {
        for(int j = i; j<=sz; j+=i)
            phi[j]-=phi[j]/i;
    }
  }
}

int main()
{   
    FAsT  
    ll a, b, c, d, e, f, g, h, k, len, n, m, p, q, r, t, x, y, z;

    init();
    sum[1] = 0;

    for(int i=2; i<=sz; i++)
    {
        sum[i] = ( (unsigned long long)phi[i] * (unsigned long long)phi[i]) + sum[i-1];
    }
    c = 1;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;

        unsigned long long  result = sum[b] - sum[a-1];

        cout<<"Case "<<c++<<": "<<result<<endl; 
    }

    

    exit(0);
}