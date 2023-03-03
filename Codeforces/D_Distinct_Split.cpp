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
#define clr(a) memset(a, 0, sizeof a)
#define reset(a) memset(a, -1, sizeof a)
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
  string s;
  cin>>s;
  ll pre =0;
  ll suf = 0;
  map<char,ll>mp;
  map<char,ll>mp2;
  map<char,ll>mp3;
  for(int i=0; i<n; i++)
  {
    if(!mp2[s[i]])
    {
        suf++;
        mp2[s[i]]++;
    }
    mp3[s[i]]++;
  }
  //cerr<<suf<<endl;
  //cout<<pre<<" "<<suf<<endl;
  ll mx = 0;
  for(int i=0; i<n; i++)
  {
    if(!mp[s[i]])
    {
        mp[s[i]]++;
        pre++;
    }
    mp3[s[i]]--;
    if(mp3[s[i]]==0)
    {
        suf--;
    }
    
    mx = max(mx,pre+suf);
  }
  cout<<mx<<endl;
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
//Solution submitted by: AFnaN, SUST CSE19