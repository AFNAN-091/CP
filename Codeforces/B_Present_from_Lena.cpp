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

    cin>>n;


    for(int i=0; i<=n; i++)
    {
        int k=0;

        while(k<(n-i)*2 and i!=n)
        {

            cout<<" ";
            k++;
        }
            int j=0;
            while(j<=i)
            {
                if(i==0)
                {
                    cout<<i;
                    j++;
                    continue;
                }
                cout<<j<<" ";
                j++;
            }

            if(--j>0)
            {
                j--;
                while(j>=0)
                {
                    if(j==0)
                    {
                        cout<<j;
                        j--;
                        continue;
                    }
                    cout<<j<<" ";
                    j--;
                }

            }

        cout<<endl;
        if(i==n)
        {
            for(int a=n-1; a>=0; a--)
            {
                int m = 0;
                while(m<(n-a)*2 and a!=n)
                {
                    cout<<" ";
                    m++;
                }

            int l=0;
            while(l<=a)
            {
                if(a==0)
                {
                    cout<<l;
                    l++;
                    continue;
                }
                cout<<l<<" ";
                l++;
            }

            if(--l>0)
            {
                l--;
                while(l>=0)
                {
                    if(l==0)
                    {
                        cout<<l;
                        l--;
                        continue;
                    }
                    cout<<l<<" ";
                    l--;
                }

            }

        cout<<endl;
            }
        }
    }

    exit(0);
}
