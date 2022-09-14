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

    cin >> t;

    map<string,int>mp;
    vector<pair<string, int>>vp;
    ll mx = INT_MIN;
    string ans = "";
    while(t--)
    {
        string s;
        cin>>s>>p;
        vp.push_back({s,p});
        if(mp[s])
        {
            a = mp[s];
            mp[s] = p+a;
        }
        else{
            mp[s] = p;
        }       
    }
    
    for(auto it: mp)
    {
        if(mx<it.second)
        {
             mx = it.second;
        }
    }
   // cout<<mx<<endl;
    map<string,ll>last;
    set<string>st;
    for(auto it: mp)
    {
       if(it.second==mx)
       {
             st.insert(it.first);
       }
    }

    // for(auto it: st)
    // {
    //     cout<<it<<endl;
    // }

    for(int i=0; i<vp.size(); i++)
    {
        
        if(st.find(vp[i].first)!=st.end())
        {
           // cout<<vp[i].first<<endl;
            if(last[vp[i].first])
            {
                a = last[vp[i].first];
                last[vp[i].first] = vp[i].second+a;
            }
            else{
                last[vp[i].first] = vp[i].second;
            }
            if(last[vp[i].first]>=mx)
            {
                cout<<vp[i].first<<endl;
                break;
            }
        }
    }
    exit(0);
}