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
  
  priority_queue<ll>odd,even;
  ll alice,bob;
  alice = bob = 0;
  for(int i=0; i<n; i++)
  {
    ll x;
    cin>>x;
    if(x%2==0)
    {
        even.push(x);
    }
    else{
        odd.push(x);
    }

  }

  bool flag = true;
  while(!even.empty() or !odd.empty())
  {
    if(flag)
    {
        if(even.empty())
        {
            odd.pop();
        }
        else if(odd.empty())
        {
            alice+=even.top();
            even.pop();
        }
        else if(even.top()>odd.top())
        {
            alice+= even.top();
            even.pop();
        
        }
        else{
            odd.pop();        
        }
        flag^=1;
    }
    else{
        if(odd.empty())
        {
            even.pop();
        }
        else if(even.empty())
        {
            bob+=odd.top();
            odd.pop();
        }
        else if(odd.top()> even.top())
        {
            bob+= odd.top();
            odd.pop();
            
        }
        else{
            even.pop();
            
        }
        flag^=1;
    }
  }



  if(alice==bob)
  {
    cout<<"Tie"<<endl;
  }
  else if(alice>bob)
  {
    cout<<"Alice"<<endl;
  }
  else{
    cout<<"Bob"<<endl;
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