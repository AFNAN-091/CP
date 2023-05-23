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
  ll n;
  cin>>n;
  vi v(n);
  
  for(auto &it: v)
  {
    cin>>it;
  }

  sort(v.begin(),v.end());


    if(n==2)
    {
        cout<<v[0]<<" "<<v[1]<<endl;
        return;
    }
  //reverse(v.begin(),v.end());

 int ind = 0;
 ll mn = INT_MAX;
 for(int i=0; i<n-1; i++)
 {
    if(abs(v[i]-v[i+1])<mn)
    {
        ind = i;
        mn = abs(v[i]-v[i+1]);
    }
 }

 ll k = ind+1;
 for(; k<n; k++)
 {
    cout<<v[k]<<" ";
 }

 for(int i=0; i<=ind; i++)
 {
    cout<<v[i]<<" ";
 }

 cout<<endl;


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