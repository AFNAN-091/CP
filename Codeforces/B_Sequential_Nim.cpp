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
  vector<ll>v(n);
  
  for(int i=0; i<n; i++)
  {
    ll x;
    cin>>x;
    v[i] = x;
  }

 bool f = true;
 ll one = 0;
 ll i= 0;
 while(i<n and v[i]==1)
 {
    one++;
    i++;
 }

 if(one==n)
 {
    if(one%2)
    {
        cout<<"First"<<endl;
    }
    else{
        cout<<"Second"<<endl;
    }
    return;
 }


 if(one%2)
 {
    cout<<"Second"<<endl;
 }
 else{
    cout<<"First"<<endl;
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