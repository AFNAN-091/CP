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
  string s;
  cin>>s;
  string rev;
  rev = s;
  int zero = count(s.begin(),s.end(),'0');
  reverse(rev.begin(),rev.end());
  if(rev==s)
  {
    if(zero==0)
    {
        cout<<"DRAW"<<endl;
    }
   else if(zero%2==0)
    {
        cout<<"BOB"<<endl;
    }
   else{
        if(zero==1){
            cout<<"BOB"<<endl;
        }
        else{
            cout<<"ALICE"<<endl;
        }
    }
  }

  else{
    if(zero==2 and s.size()%2==1 and s[s.size()/2]=='0')
    {
        cout<<"DRAW"<<endl;
    }
    else{
        cout<<"ALICE"<<endl;
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