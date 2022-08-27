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
  int arr[3],brr[3];
  for(int i=0; i<3; i++)
  {
    cin>>arr[i];
  }
  
  for(int i=0; i<3; i++)
  {
    cin>>brr[i];
  }
  int pos = min(arr[2], brr[1]);
  brr[1]-=pos;
  int minus = 0;
  arr[1]-=brr[0];
  if(brr[1]>0)
  {
    arr[1]-=brr[1];
  }
  
  
  if(arr[1]>0)
  {
    minus = arr[1];
    minus*=2;
    minus*=-1;
  }
  cout<<pos*2+minus<<endl;

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