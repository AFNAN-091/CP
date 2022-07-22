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
  vector<int>v(n);
  for(int i=0; i<n; i++)
  {
    cin>>v[i];
  }
  int x;
  for(int i=0; i<n; i++)
  {
    cin>>x;
    string s;
    cin>>s;
    for(int j=0; j<x; j++)
    {
        if(s[i]=='U')
        {
            if(v[i]==0)
            {
                v[i] = 9;
            }
            else if(v[i]==9){
                v[i]=0;
            }
            else{
              v[i]--;
            }
        }
        else if(s[i]=='D')
        {
            if(v[i]==9)
            {
                v[i] = 1;
            }
            else if (v[i]==0){
                
                v[i] = 9;
            }
            else{
              v[i]++;
            }
        }
    }
  }
  for(auto it: v)
  {
    cout<<it<< " ";
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