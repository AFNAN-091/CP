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

bool isPalindrome(string S)
{    
    string P = S;
    reverse(P.begin(), P.end());  
    if (S == P) {
        return true;
    }
    else {
        return false;
    }
}

void AFnaN()
{
  ll n;
  cin>>n;
  string s;
  cin>>s;
  int cnt = 0;
  int len = (n-1)/2;
  if(1&n){
      cnt=1;
  }
  else{
      cnt = 2;
  }
  for(int i=len; i>0; i--)
  {
      if(s[i]==s[i-1])
      {
          cnt+=2;
      }
      else{
          break;
      }
  }
  cout<<cnt<<endl;
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