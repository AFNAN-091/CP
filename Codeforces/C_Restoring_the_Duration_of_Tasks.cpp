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
  int n;
  cin>>n;
  map<int,int>a;
  int x,y;
  vector<int>v(n);
  for(int i=0; i<n; i++)
  {
    cin>>v[i];
  }

  for(int i=0; i<n; i++)
  {
    cin>>x;
    a[v[i]] = x;
  }

  y = 0;   
  for(auto it: a)
  {
    if(y==0)
    {
        cout<<it.second - it.first<<" ";
        y = it.second;
    }
    else{
        if(y>it.first)
        {
            cout<<it.second-y<<' ';
        }
        else{
            cout<<it.second-it.first<<' ';
        }
        y = it.second;
    }
  } 

  cout<<endl;

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