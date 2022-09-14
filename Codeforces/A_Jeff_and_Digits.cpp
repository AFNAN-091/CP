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
  
}

int main()
{   
    FAsT  
    ll a, b, c, d, e, f, g, h, k, len, n, m, p, q, r, t, x, y, z;

    cin>>n;
    
    ll cnt = 0;
    vector<int>v(n);
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        mp[x]++;
    }

  //  cout<<mp[5]<<endl;
   // cout<<mp[0]<<endl;
    
    if(mp[5]>8 and mp[0]>0)
    {
        a = mp[5]/9;
        a*=9;
        for(int i=0; i<a; i++)
        {
            cout<<5;
        }
        for(int i=0; i<mp[0]; i++)
        {
            cout<<0;
        }
        cout<<endl;
    }
    else if(mp[0]>0){
        cout<<0<<endl;
    }
    else{
        cout<<-1<<endl;
    }

    exit(0);
}