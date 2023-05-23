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




ll helper(int x, int y, vector<ll>&pos, vector<ll>&neg,int flag)
{
   if(x>pos.size() or y>neg.size())
   {
      return -1e18;
   }
   // for(auto it: pos)
   // {
   //    cout<<it<<" ";
   // }
   // cout<<endl;
   // for(auto it: neg)
   // {
   //    cout<<it<<" ";
   // }
   // cout<<endl;
   
   if(flag)
   {
   //   cout<<x<<" "<<y<<endl;
      ll ans = 1;
      for(int i=0; i<x; i++)
      {
         ans*=pos[i];
      }
     // cout<<ans<<" ";
      for(int i=0; i<y; i++)
      {
         ans*=neg[neg.size()-i-1];
      }
      // cout<<x <<" "<<y<<endl;
      // cout<<"pos "<<ans<<endl;
 
      return ans;
   }
   else{
      //cout<<x<<" "<<y<<endl;
      ll ans = 1;
      for(int i=0; i<y; i++)
      {
         ans*=neg[i];
      }
      for(int i=0; i<x; i++)
      {
         ans*=pos[i];
      }
      // cout<<x <<" "<<y<<endl;
      // cout<<"neg "<<ans<<endl;
      return ans;
   }
}

void AFnaN()
{
  ll n;
  cin>>n;

  vi neg,pos;
  for(int i=0; i<n; i++)
  {
    ll x;
    cin>>x;
    if(x>0)
    {
      pos.push_back(x);
    }
    else{
      neg.push_back(x);
    }
  }


  sort(pos.begin(),pos.end(),greater<ll>());
  sort(neg.begin(),neg.end());
  ll ans = -1e18;
  
  for(int i=0; i<=5; i++)
  {
    int x = i;
    int y = 5-i;
    ll even = helper(x,y,pos,neg,1);
    ll odd = helper(x,y,pos,neg,0);
    
    ans = max(ans, even);
    ans = max(ans, odd);

   }

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