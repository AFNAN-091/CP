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
    vector<int> ans;
	
	cin >> n;
	int c1 = 0;
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		if(a == 0){
			if(c1){
				c1 = 0;
			}
			ans.push_back(0);
		} else if(a == 1){
			if(c1){
				ans.push_back(1);
				ans.push_back(1);
				c1 = 0;
			} else {
				c1 = 1;
			}
		}
	}
	cout << ans.size() << '\n';
	for(int a : ans){
		cout << a << ' ';
	}
	cout << '\n';

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