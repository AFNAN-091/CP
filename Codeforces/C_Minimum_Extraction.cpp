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
   cin>>n;
   vector<ll>v(n);
   for(auto &it: v)
   {
        cin>>it;
   }
   // 1 2 7 10
   // 1 1 5 3
   // 1 6 9
   // 5 8
   // 3
  // cout<<endl;
   sort(v.begin(),v.end());
//    for(auto it:v)
//    {
//          cout<<it<<" ";
//    }
  // cout<<endl;
   vector<ll>pre(n);
   pre[0] = v[0];
   ll sum;
   sum = v[0];
   for(int i=1; i<n; i++)
   {
        pre[i] = v[i]-sum;
        sum+=pre[i];
   }
   sort(pre.begin(),pre.end(),greater<int>());
   cout<<pre[0]<<endl;
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