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


int main()
{   
    FAsT  
    ll t;
    cin >> t;

    while(t--)
    {
       ll n,m,x,y,d;
  cin>>n>>m>>x>>y>>d;
  if(x==1 and y==1)
  {
    cout<<-1<<endl;
  }
  else if(d+x>=n and d+y>=m )
  {
    cout<<-1<<endl;
  }
  else if(y-d<=1 and x-d<=1)
  {
    cout<<-1<<endl;
  }
  else if((y-d<=1 and y+d>=m) or (x-d<=1 and x+d>=n))
  {
    cout<<-1<<endl;
  }
  else{
    ll ans = n-1;
    ans+=(m-1);
    cout<<ans<<endl;
  }
       
    }

    exit(0);
}