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
char no[] = {'N','O'};
int rr[] = { -1, 1, 0, 0, -1, -1, 1, 1};
int cc[] = {0, 0, -1, 1, -1, 1, -1, 1};
char yes[] = {'Y','E','S'};
/*--------------------------------------------------------------------*/

void AFnaN()
{
  int n,x;
  cin>>n; 
  int position = -1;
  bool flag = true;
  for(int i=0; i<n; i++)
  {
      cin>>x;
      if(x==0 and flag )
      {
          position = i;
          flag = false;
      }
      if(x>0)
      {
          position = -1;
          true;
      }
  }
  if(position<=n-1 and position!=-1)
  {
    //  cout<<"pos ";
      cout<<position-1<<endl;
  }

  else{
     // cout<<n<<" ";
      cout<<n-1<<endl;
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