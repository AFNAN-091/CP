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
  map<int,int>mp;
  for(int i=0; i<n; i++)
  {
    int x;
    cin>>x;
    int demo = x%10;
    mp[demo]++;
  }



  //cout<<"farhad";


 for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                for(int k=0;k<10;k++)
                {
                    int a=-1,b=-1,c=-1;
                    if(mp[i]!=0)
                    {
                        a=1;
                        mp[i]--;
                    }
                    if(mp[j]!=0)
                    {
                        b=1;
                        mp[j]--;
                    }
                    if(mp[k]!=0)
                    {
                        c=1;
                        mp[k]--;
                    }
 
                    if(a==1&&b==1&&c==1)
                    {
                        int sum=i+j+k;
                        if(sum%10==3)
                        {
                            cout<<"YES"<<endl;
                            return;
                        }
                    }
                    if(a==1)mp[i]++;
                    if(b==1)mp[j]++;
                    if(c==1)mp[k]++;
                }
            }
        }
  cout<<"NO"<<endl;
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