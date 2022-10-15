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
  string a,b;
  cin>>a>>b;

  if((a[a.size()-1] == b[b.size()-1]) and ('S'== a[a.size()-1] ))
  {
     if(a.size()==b.size())
     {
        cout<<"="<<endl;
        return;
     }
     else if(a.size()>b.size())
     {
        cout<<"<"<<endl;
        return ;
     }
     else{
        cout<<">"<<endl;
        return;
     }
  }
  if((a[a.size()-1] == b[b.size()-1]) and ('L'== a[a.size()-1] ))
  {
     if(a.size()==b.size())
     {
        cout<<"="<<endl;
        return;
     }
     else if(a.size()>b.size())
     {
        cout<<">"<<endl;
        return ;
     }
     else{
        cout<<"<"<<endl;
        return;
     }
  }

  else{
    if(a[a.size()-1]=='S' and b[b.size()-1] == 'L')
    {
        cout<<"<"<<endl;
    }
    else if(a[a.size()-1]=='L' and b[b.size()-1] == 'S')
    {
        cout<<">"<<endl;
    }
    else if(a[a.size()-1]=='L' and b[b.size()-1] == 'M')
    {
        cout<<">"<<endl;
    }
    else if(a[a.size()-1]=='M' and b[b.size()-1] == 'L')
    {
        cout<<"<"<<endl;
    }
    else if(a[a.size()-1]=='S' and b[b.size()-1] == 'M')
    {
        cout<<"<"<<endl;
    }
    else if(a[a.size()-1]=='M' and b[b.size()-1] == 'S')
    {
        cout<<">"<<endl;
    }

    else{
        cout<<"="<<endl;
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