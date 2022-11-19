#include <bits/stdc++.h>
using namespace std;

using vii = vector<pair<int, int>>;
using vll = vector<pair<long long, long long>>;
using vi  = vector<int>;
using vl  = vector<long long>;
using pii = pair<int, int>;
using pll = pair<long long, long long>;
using pil = vector<int, long long>;
using ll  = long long;
using ull = unsigned long long;

#define f first
#define s second 
#define pb push_back
#define endl '\n'
#define front_zero(n) __builtin_clzll(n)
#define back_zero(n) __builtin_ctzll(n)
#define total_one(n) __builtin_popcount(n)
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define loop1(n) for(int i = 1; i <= n; ++i)
#define loop0(n) for(int i = 0; i < n; ++i)
#define fastIO cin.tie(0)->sync_with_stdio(0)


// #define LOCAL

#ifdef LOCAL
#include "algo/debug.h"
#else
#define deb(...) 42
#endif

// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;

// template <typename T>
// using order_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// order_of_key() *find_by_order()


const int maxn = 1e6 + 9;


int main(){
   fastIO;
   int tt;
   cin >> tt;
   while(tt--){
    ll l, r, x, a, b;
    cin >> l >> r >> x >> a >> b;
    if(a == b){
      cout << 0 << endl;
    }
    else if(abs(a - b) >= x){
      cout << 1 << endl;
    }
    else if((abs(a - l) >= x && abs(l - b) >= x) || (abs(r - a) >= x && abs(r - b) >= x)){
      cout << 2 << endl;
    }
    else if(abs(a - r) >= x && abs(l - r) >= x && abs(l - b) >= x){
      cout << 3 << endl;
    }
    else if(abs(a - l) >= x && abs(l - r) >= x && abs(r - b) >= x){
      cout << 3 << endl;
    }
    else {
      cout << -1 << endl;
    }
   }

}