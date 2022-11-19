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
  ll n,m;
  cin>>n>>m;

  ll two,five;
  two = five = 0;

  ll demo = n;

  while(!(demo%2))
  {
    two++;
    demo/=2;
  } 

  while(!(demo%5))
  {
    five++;
    demo/=5;
  }

  ll cnt = 1;
  if(five>two)
  {
    ll p = five - two;

    while(p--)
    {
        if(cnt*2<=m)
        {
            cnt*=2;
        }
        else{
            break;
        }
    }
  }
  else{
    ll p = two - five;

    while(p--)
    {
        if(cnt*5<=m)
        {
            cnt*=5;
        }
        else{
            break;
        }
    }
  }

  while(1)
  {
    if(cnt*10<=m)
    {
        cnt*=10;
    }
    else{
        break;
    }
  }

  cnt =(m/cnt)*cnt;

  ll ans = cnt*n;

  cout<<ans<<endl;

  

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