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
#define yes cout<< "YES\n"
#define no cout<< "NO\n"
#define f(x) cout<< x <<endl
#define in(x) cin>> x 
#define er(x) cerr << x << endl
#define FAsT ios_base::sync_with_stdio(false);cin.tie(NULL);
#define sz 50000
#define intmax INT_MAX
#define intmin INT_MIN
typedef long long ll;
typedef vector<long long> vi;
int rr[] = { -1, 1, 0, 0, -1, -1, 1, 1};
int cc[] = {0, 0, -1, 1, -1, 1, -1, 1};
/*--------------------------------------------------------------------*/

void AFnaN()
{
  string s[9];

  for(int i=0; i<9; i++)
  {
    cin>>s[i];
  }


  if(s[8][0]=='9')
  {
    s[8][0]--;
  }
  else {
    s[8][0]++;
  }

  if(s[7][3]=='9')
  {
    s[7][3]--;
  }
  else {
    s[7][3]++;
  }

  if(s[6][6]=='9')
  {
    s[6][6]--;
  }
  else {
    s[6][6]++;
  }

  if(s[5][7]=='9')
  {
    s[5][7]--;
  }
  else {
    s[5][7]++;
  }

  if(s[4][5]=='9')
  {
    s[4][5]--;
  }
  else {
    s[4][5]++;
  }

  if(s[3][2]=='9')
  {
    s[3][2]--;
  }
  else {
    s[3][2]++;
  }

  if(s[2][1]=='9')
  {
    s[2][1]--;
  }
  else {
    s[2][1]++;
  }

  if(s[1][4]=='9')
  {
    s[1][4]--;
  }
  else {
    s[1][4]++;
  }

  if(s[0][8]=='9')
  {
    s[0][8]--;
  }
  else {
    s[0][8]++;
  }


  for(int i=0; i<9; i++)
  {
    for(int j=0; j<9; j++){
        cout<<s[i][j];
    }
    cout<<endl;
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