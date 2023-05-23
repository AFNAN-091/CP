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
  ll m,n;
  cin>>m>>n;
  map<ll,ll>mp;
  ll mx =1;

  for(ll i=0; i<m; i++)
  {
    ll x;
    cin>>x;
    mp[x]++;
    if(mx<x)
    {
        mx = x;
    }
  }

  ll cnt = 0;
  ll i=1;
  while(cnt<n)
  {
    if(mp[i])
    {
        i++;
        continue;
    }
    else{
        cnt+=i;
        mp[i]++;
        i++;
    }



    if(cnt==n)
    { 
        i--;
        mx = max(mx,i);
        for(int j=1; j<=mx; j++)
        {
            if(mp[j])
            {
                continue;
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
        return;
    }
    else if(cnt>n){
        //cout<<cnt<<endl;
        cout<<"NO"<<endl;
        return;
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