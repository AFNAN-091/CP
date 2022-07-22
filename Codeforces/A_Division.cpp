// //           * * ببسم الله الرحمن الرحيم    * *
// // ********************@Author**************************************
// //     ____     _____   __  _     ____     __  _
// //    / __ \   | ____| |  \| |   / __ \   |  \| |
// //   / /__\ \  | |__   | |\  |  / /__\ \  | |\  |
// //  /_/    \_\ |_|     |_| \_| /_/    \_\ |_| \_|
 
// #include<bits/stdc++.h>
// using namespace std;
// #define mod 1000000007
// #define lcm(a,b)    a*b/__gcd(a,b)
// #define endl '\n'
// #define FAsT ios_base::sync_with_stdio(false);cin.tie(NULL);
// #define sz 50000
// typedef long long ll;
// char no[] = {'N','O'};
// int rr[] = { -1, 1, 0, 0, -1, -1, 1, 1};
// int cc[] = {0, 0, -1, 1, -1, 1, -1, 1};
// char yes[] = {'Y','E','S'};
// /*--------------------------------------------------------------------*/

// void AFnaN()
// {
//   ll n;
//   cin>>n;
//   if(n<=1399)
//   {
//       cout<<"Division 4"<<endl;
//   }
//   else if(n>= 1400 and n<=1599)
//   {
//       cout<<"Division 3"<<endl;
//   }
//   else if(n>=1600 and n<=1899){
//       cout<<"Division 2"<<endl;
//   }
//   else{
//       cout<<"Division 1"<<endl;
//   }
// }

// int main()
// {   
//     FAsT  
//     ll a, b, c, d, e, f, g, h, k, len, n, m, p, q, r, t, x, y, z;

//     cin >> t;

//     while(t--)
//     {
//        AFnaN();
       
//     }

//     exit(0);
// }

#include<iostream>
using namespace std;

int main()
{
    int i , x ;
     i = x = 0;

     for(int i=1; i<10; i++)
     {
         if(i%2==1)
         {
             x+=i;
         }
         else{
             x--;
         }
         cout<<x<<" ";
     }
     cout<<x<<endl;
}
