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
  ll n,m;
  cin>>n>>m;
   ll a = m-(n-1);
  if(n>m)
  {
    cout<<"NO"<<endl;
    return;
  }

 
 else{
    if(n%2==0)
   {
    if(a%2)
    {
         cout<<"YES"<<endl;
            for(int i=0; i<n-2; i++)
            {
                cout<<1<<" ";
            }
            cout<<(a+1)/2<<" "<<(a+1)/2<<endl;
            return;
    }
    else{
        cout<<"NO"<<endl;
        return;
    }
  }

  else{
    cout<<"YES"<<endl;
    for(int i=0; i<n-1; i++)
    {
        cout<<1<<" ";
    }
    cout<<a<<endl;
  }

 }
  

}

int main()
{   
    FAsT  
    ll a, b, c, d, e, f, g, h, k, len, n, m, p, q, r, t, x, y, z;

    cin >> t;

    while(t--)
    {
       AFnaN();
       
    }

    exit(0);
}