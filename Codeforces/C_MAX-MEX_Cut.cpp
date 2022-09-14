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
  string s1,s;
  //cout<<"N "<<n<<endl;
  cin>>s>>s1;
  ll ans = 0;
  //cout<<s<<" "<<s1<<endl;
  for(int i=0; i<n; i++)
  {
    if(s[i]=='1' and s1[i]=='1')
    {
        
        if((s1[i+1]!='1' or s[i+1]!='1') and (i<n-1))
        {
            ans+=2;
            //cout<<"fs";
          //  cout<<1<<" fj"<<endl;
            i++;
        }
        continue;
    }
    if(s[i]=='0' and s1[i]=='0'){
        if(s[i+1]=='1' and s1[i+1]=='1' and i<n-1)
        {
            
            ans+=2;
            i++;
        }
        else{
            ans++;
        }
        continue;
    }
    if(s[i]!=s1[i])
    {
        ans+=2;
        continue;
    }
  }
  cout<<ans<<endl;
}

int main()
{   
    FAsT  
    ll a, b, c, d, e, f, g, h, k, len, n, m, p, q, r, t, x, y, z;

    cin >> t;
   // cout<<t<<endl;
    while(t--)
    {
       AFnaN();
       
    }

    exit(0);
}