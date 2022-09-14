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
    vector<ll>v(n);

    for(auto &it : v)
    {
        cin>>it;
    }

    sort(v.begin(),v.end());
    vector<ll>ans;
    
    int j = 0;
    k = n-1;
    bool flag = true;
    for(int i=0; i<n; i++)
    {
        if(flag)
        {
          //  cout<<v[k]<<" ";
            ans.push_back(v[k]);
            k--;
            flag^=1;
        }
        else{
           // cout<<v[j]<< " ";
            ans.push_back(v[j]);
            j++;
            flag^=1;
        }
    }
    //cout<<endl;

    swap(ans[0],ans[n-1]);
    ll cnt = 0;
    for(int i=1; i<n-1; i++)
    {
        if(ans[i]<ans[i-1] and ans[i]<ans[i+1])
        {
            cnt++;
        }
    }

    cout<<cnt<<endl;
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    exit(0);
}