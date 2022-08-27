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
  string s;
  cin>>s;
  vector<string>num,word;
  for(int i=0; i<s.size(); i++)
  {
    if(s[i]>='0' and s[i]<='9')
    {
        string nilam = "";
        while(s[i]>='0' and s[i]<='9' and i<s.size())
        {
            nilam +=s[i];
            i++;
        }
        //cout<<nilam<<endl;
        num.push_back(nilam);
    }
    else{
        string ch = "";
        while(s[i]>='A' and s[i]<='Z' and i<s.size())
        {
            ch +=s[i];
            i++;
        }
        //cout<<ch<<endl;
        word.push_back(ch);
    }
    i--;
    
  }
  

  if(num.size()>1 and word.size()>1)
  {
    string ans2 = num[0];
    string ans1 = num[1];
    //cout<<ans1<<endl;
    int a = stoi(ans1);
    ans1 = "";
   // cout<<a<<endl;
    while(a)
    {
        ans1 +=('A'+(a-1)%26);
        a = (a-1)/26;
    }
    reverse(ans1.begin(),ans1.end());
    cout<<ans1<<ans2<<endl;
  }
  else{
    string ans1 = num[0];
    string ans2 = word[0];
    int j = 0;
    int n = 0;
    for(int i=ans2.size()-1; i>=0; i--)
    {
        int base = pow(26,j);
      //  cout<<"base "<<base<<endl;
        j++;
        int a = s[i]-'A'+1;
       // cout<<"a"<<a<<endl;
        n +=(base*a);
       // cout<<n<<endl;
    }
    //cout<<n<<endl;
    cout<<"R"<<ans1<<"C"<<n<<endl;
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