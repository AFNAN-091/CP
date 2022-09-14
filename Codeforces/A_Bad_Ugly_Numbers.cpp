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
vector<int>prime;
int visit[1002];
void isprime()
{
    for(int i=2; i*i<=1000; i++)
    {
        if(!visit[i])
        {
            
            for(int j=i*i; j<=1000; j+=i)
            {
              //  cout<<j<<" ";
                visit[j] = true;
            }
        }        
    }
    for(int i=2; i<1000; i++)
    {
        if(!visit[i]) 
        {
             prime.push_back(i);
        }
    }
    
}
int main()
{   
    FAsT  
    ll a, b, c, d, e, f, g, h, k, len, n, m, p, q, r, t, x, y, z;

    //isprime();
    cin>>t;
    while(t--)
    {
       cin>>n;
       if(n==1)
       {
        cout<<-1<<endl;
        continue;
       }
       cout<<2;
       for(int i=0; i<n-1; i++)
       {
        cout<<3;
       }
       cout<<endl;
       // auto it = lower_bound(prime.begin(),prime.end(),a);
        //cout<<it-prime.begin()<<endl;
    }

    exit(0);
}