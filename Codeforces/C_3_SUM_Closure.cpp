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
        cin >> n;
        set<ll> st;
        vector<ll>v(n+1), c(n+1);
        ll id = 0;
        int zero = 0;
        int neg = 0, pos = 0;
        for(int i = 0; i < n; ++i){
            cin >> v[i];
            st.insert(v[i]);
            if(v[i] < 0)
            {
                neg++;
                c[id++] = v[i];
            }
            else if(v[i] > 0)
            {
                pos++;
                 c[id++] = v[i];
            }
            else zero++;
        }
        if(zero == 1)c[id++] = 0;
        else if(zero == 2){
            c[id] = 0;
            id++;
            c[id] = 0;
            id++;
        }
        else if(zero >= 3){
            c[id] = 0; id++;
            c[id] = 0; id++;
            c[id] = 0; id++;
        }

        if(neg >= 3 or pos >= 3)
        {
            cout << "NO" << endl;
            return;
        }
        else {
            for(int i = 0; i < id; i++){
                for(int j = i + 1; j < id; j++){
                    for(int k = j + 1; k < id; k++){
                        int  ans = c[i] + c[j] + c[k];
                        if(st.find(ans) == st.end()){
                            cout << "NO" <<  endl;
                            return;
                        }
                      
                    }
                }
            }
            cout << "YES" << endl;
            return;
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