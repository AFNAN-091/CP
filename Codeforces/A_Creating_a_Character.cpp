                    #include <bits/stdc++.h>
#define endl '\n'
#define PI acos(-1)
#define sz 100010
#define inf 1000000009
#define mod 100000000
#define RUN_FAST ios::sync_with_stdio(false);
using namespace std;

void solve()
{
    int64_t a, b, c;
 
    cin >> a >> b >> c;
 
    int64_t tmp = b + c - a;
    if (tmp < 0) cout << c + 1 << endl;
    else {
        tmp /= 2;
        cout << max(0ll, c - tmp) << endl;
    }
}

int main()
{
    RUN_FAST; cin.tie(nullptr);
    int64_t T;
    cin >> T;
    while (T--) solve();
    return 0;
}