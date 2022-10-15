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

    vector<ll>odd;
    vector<ll>even;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x>0)
        {
            even.push_back(x);
        }
        else if(x<0)
        {
            odd.push_back(x);
        }
    }

    if(even.size()==0 )
    {
        if(odd.size()%2==0)
        {
            cout<<odd.size()-3<<" ";
            for(int i=0; i<odd.size()-3; i++)
            {
                cout<<odd[i]<<" ";
            }
        }
        else{
            cout<<odd.size()-2<<" ";
            for(int i=0; i<odd.size()-2; i++)
            {
                cout<<odd[i]<<" ";
            }
        }
        
        cout<<endl;
    }

    else if(odd.size()%2==0)
    {
        cout<<odd.size()-1<<" ";
        for(int i=0; i<odd.size()-1; i++)
        {
            cout<<odd[i]<<" ";
        }
        cout<<endl;
    }

    else{
        cout<<odd.size()<<" ";
        for(int i=0; i<odd.size(); i++)
        {
            cout<<odd[i]<<" ";
        }
        cout<<endl;
    }

    if(even.size()==0)
    {
        if(odd.size()%2==0)
        {
            cout<<2<<" ";
            for(int i=odd.size()-3; i<odd.size()-1; i++)
            {
                cout<<odd[i]<<" ";
            }
        }
        else{
            cout<<2<<" ";
            for(int i=odd.size()-2; i<odd.size(); i++)
            {
                cout<<odd[i]<<" ";
            }
        }
        
        cout<<endl;
    }
    else {
        cout<<even.size()<<" ";
        for(int i=0; i<even.size(); i++)
        {
            cout<<even[i]<<" ";
        }
        cout<<endl;
    }

    if(odd.size()%2==0)
    {       
        cout<<2<<" ";
        cout<<odd[odd.size()-1]<<" ";
        cout<<0<<endl;
        cout<<endl;
    }
    else{
        cout<<1<<" ";
    cout<<0<<endl;
    }
    

    exit(0);
}