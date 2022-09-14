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
  ll arr[4];
  for(int i=0; i<4; i++)
  {
    cin>>arr[i];
  }
  ll odd = 0;
  ll sum = 0;
  ll zero = 0;
  for(int i=0; i<3; i++)
  {
    if(arr[i]%2==1)
    {
    //    cout<<arr[i]<<" ";
        odd++;
    }
    if(arr[i]==0)
    {
        zero++;
    }
    sum+=arr[i];
  }
  
//  cout<<odd<<endl;
  if(zero>0 and odd>0 and arr[3]%2==1)
  {
    cout<<"No"<<endl;
  }
  else if(odd==2 and sum>2 and arr[3]%2==1)
  {
    cout<<"Yes"<<endl;
  }
  else if(odd==0)
  {
    cout<<"Yes"<<endl;
  }
  else if(odd==3)
  {
   // cout<<"fds";
    cout<<"Yes"<<endl;
  }
  else if(odd == 1 and arr[3]%2==0 )
  {
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"No"<<endl;
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