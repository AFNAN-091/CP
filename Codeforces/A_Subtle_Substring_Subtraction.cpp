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
  string s;
  cin>>s;
  int n = s.size();
  if(n%2==0)
  {
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        ans+=s[i]-'a'+1;
    }
    cout<<"Alice ";
    cout<<ans<<endl;
  }

  else{
    if(n==1)
    {
        cout<<"Bob"<<" "<<s[0]-'a'+1<<endl;
        return;
    }
    int ans = 0;
    if(s[0]>=s[n-1])
    {
        for(int i=0; i<n-1; i++)
        {
           // cout<<s[i]<<" ";
            ans+=s[i]-'a'+1;
        }
       // cout<<ans<<endl;
        if(ans>(s[n-1]-'a'+1))
        {
            cout<<"Alice ";
        }
        else{
            cout<<"Bob ";
        }
        
        cout<<abs(ans-(s[n-1]-'a'+1))<<endl;
    }
    else 
    {
        for(int i=1; i<n; i++)
        {
            ans+=s[i]-'a'+1;
        }
        if(ans>(s[0]-'a'+1))
        {
            cout<<"Alice ";
        }
        else{
            cout<<"Bob ";
        }
        
        cout<<abs(ans-(s[0]-'a'+1))<<endl;
    }
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