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
    int n, d;

    cin >> n >> d;
    vector <int> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];

    int64_t sum = 0, prev = n + 1;
    for (int i = 0; i < n; i++) {
        int64_t right = upper_bound(v.begin(), v.end(), v[i] + d) - v.begin();
        int64_t diff = right - i;

        if (diff < 3) continue;
        sum += diff * (diff - 1) * (diff - 2) / 6;

        if (prev <= right) {
            diff = prev - i;
            if (diff >= 3) sum -= diff * (diff - 1) * (diff - 2) / 6;
        }
        prev = right;
    }
    cout << sum << endl;
}

int main()
{
    RUN_FAST; cin.tie(nullptr);
    solve();
    return 0;
}