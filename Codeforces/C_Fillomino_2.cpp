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
  ll n;
  cin>>n;
  int arr[n][n];
  memset(arr,0,sizeof(arr));
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        int val = x;
        int j=i;
        int paina = i;
        while(x--)
        {
            arr[paina][j] = val;
          //  cout<<paina<<" "<<j<<" "<<arr[paina][j]<<endl;
            if(j!=0 and arr[paina][j-1]==0)
            {
              j--;
            }
            else{
                
                paina++;
            }        
        }    
    }
    for(int i=0; i<n; i++)
    {
       int j= 0;
     //  cout<<"J "<<j<<endl;
       while(j<=i)
        { 3
             cout<<arr[i][j]<<" ";
             j++;
        }
        cout<<endl;
    }
  

}

int main()
{   
    FAsT  
    ll a, b, c, d, e, f, g, h, k, len, n, m, p, q, r, t, x, y, z;

    // cin >> t;

    // while(t--)
    // {
       AFnaN();
       
   // }

    exit(0);
}