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
  cin >> n;
 
  if(n % 4 == 0) {
 
    for(int i=0; i+3 < n; i+=4) cout << i <<" " <<i+1 <<" "<<i+3<<" "<<i+2<<" ";
    cout << "\n";
    return;
  }
  if(n % 4 == 1) {
 
    for(int i=4; i+3 < n+4; i+= 4) cout << i <<" " <<i+1 <<" "<<i+3<<" "<<i+2<<" ";
    cout << "0\n";
    return;
  }
 
  if(n % 4 == 2) {
 
    for(int i=16; i+3 < n+12; i+=4) cout << i <<" " <<i+1 <<" "<<i+3<<" "<<i+2<<" ";
    // 6 left
 
    cout << "12 8 2 4 1 3\n";
    return;
 
  }
 
  for(int i=4; i+3 < n+4; i+=4) cout << i <<" " <<i+1 <<" "<<i+3<<" "<<i+2<<" ";
 
  cout << "2 1 3\n";
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