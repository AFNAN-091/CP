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
  
}

int main()
{   
    FAsT  
    ll a, b, c, d, e, f, g, h, k, len, n, m, p, q, r, t, x, y, z;

    cin>>n;
    map<int,int>one;
    map<int,int>dui;
    map<int,int>tin;
    vector<int>v(n);
    vector<int>vv(n-1);
    for(int i=0; i<n; i++)
    {
        cin>>x;
        one[x]++;
        v[i] = x;
    }
    for(int i=0; i<n-1; i++){
        cin>>x;
        dui[x]++;
        vv[i] = x;
    }
    for(int i=0; i<n; i++)
    {
        if(one[v[i]]!=dui[v[i]])
        {
            cout<<v[i]<<endl;
            break;
        }
    }
    for(int i=0; i<n-2; i++){
        cin>>x;
        tin[x]++;
    }

    for(int i=0; i<n-1; i++)
    {
        if(tin[vv[i]]!=dui[vv[i]])
        {
            cout<<vv[i]<<endl;
            break;
        }
    }
        
    exit(0);
}