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

  for(auto &it: v)
  {
    cin>>it;
  }
  ll cnt = 0;
  //cout<<n<<endl;
  ll i = (n/2) - 1;
  ll j = n/2 ;
  if(n%2==1)
  {
    j++;
  }
  //cout<<i<<" "<<j<<endl;
  while(i>=0 and j<n)
  {
    if(v[i]==v[j])
    {
        ll a = v[j]-v[i]-cnt;
        if(a<0)
        {
            cout<<-1<<endl;
            return;
        }
        i--;
        j++;
        continue;
    }
    else if(v[i]<=v[j])
    {
        ll a = v[j]-v[i]-cnt;
        if(a<0)
        {
            cout<<-1<<endl;
            return;
        }
      //  cout<<a<<" ";
        cnt+=a;
    }
    else{
        cout<<-1<<endl;
        return;
    }
    i--;
    j++;
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