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
   ll a,b,c;
   cin>>a>>b>>c;
   if(a==1)
   {
    cout<<1<<endl;
   }
   else {
    ll x = abs(b-c);
    ll y = abs(c-1);
    ll d = x+y;
    if((a-1)==d)
    {
        cout<<3<<endl;
    }
    else if((a-1)<d)
    {
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }
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