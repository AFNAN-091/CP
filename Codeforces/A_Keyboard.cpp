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

    char ch ;
    cin>>ch;
    if(ch =='R')
    {
        a = -1;
    }
    else{
        a = 1;
    }
    string s,str;
    cin>>s;
    str = "qwertyuiop";
    string str1,str2;
    str1 = "asdfghjkl;";
    str2 = "zxcvbnm,./";

    for(int i=0; i<s.size(); i++)
    {
        for(int j=0; j<str.size(); j++)
        {
            if(s[i]==str[j])
            {
                cout<<str[j+a];
                break;
            }
        }

        for(int j=0; j<str1.size(); j++)
        {
            if(s[i]==str1[j])
            {
                cout<<str1[j+a];
                break;
            }
        }

        for(int j=0; j<str2.size(); j++)
        {
            if(s[i]==str2[j])
            {
                cout<<str2[j+a];
                break;
            }
        }

    }

    cout<<endl;


    exit(0);
}