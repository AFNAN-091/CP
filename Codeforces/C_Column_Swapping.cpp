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
  ll a,b;
  cin>>a>>b;
  ll arr[a+1][b+1],brr[a+1][b+1];
  for(int i=1; i<=a; i++)
  {
      for(int j=1; j<=b; j++)
      {
          cin>>arr[i][j];
          brr[i][j] = arr[i][j];
      }
      sort(arr[i]+1,arr[i]+b+1);
  }

  ll x,y ;
  x = y = 1;
  for(int i= 1; i<=a; i++)
  {
      int d ,e;
      d = e = -1;
      for(int j = 1; j<=b; j++)
      {
          if(arr[i][j]!=brr[i][j])
          {
              if(d!=-1)
              {
                  e = j;
                  break;
              }
              else {
                  d = j;
              }
          }
      }
      if(d!=-1 and e!=-1)
      {
          bool flag = 1;
          for(int i=1; i<=a; i++)
          {
              swap(arr[i][d],arr[i][e]);
              if(!flag) break;
              for(int j=1; j<=b; j++)
              {
                  if(arr[i][j]!=brr[i][j])
                  {
                      flag = 0;
                      break;
                  }
              }
          }
          if(flag)
          {
              x = d, y = e;
          }
          else{
              x =-1; 
              y = -1;
              break;
          }

      }
  }

  if(x == -1) cout<<x<<endl;
  else  cout<<x<<" "<<y<<endl;
  
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