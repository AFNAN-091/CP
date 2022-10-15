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




void merge(vector<int>&arr, int st, int en, int mid)
{
    
    vector<int>temp(arr.size()); /// en - st + 1
    int i, j; /// j = 0

    for (i = 0; i<arr.size(); i++) /// i = st; i <= en
      temp[i] = arr[i]; /// temp[j++]
    /*temp = arr; // vector sortcut copy */
   // cout<<"st "<<st<<" mid "<<mid<<" en "<<en<<endl;
    int n = mid - st + 1, m = en - mid, k = st;
  //  cout<<"n "<<n<<" m"<<m<<endl;
    i = j = 0;

    while(i<n && j<m)
    {
        if( temp[ st + i] <= temp[mid + 1 + j] ) /// temp[ i ] = temp[ n + j ]
            arr[k++] = temp[st + i++];
        else
            arr[k++] = temp[mid + 1 + j++];
    }
    while(i<n)
        arr[k++] = temp[st + i++];
    while(j<m)
        arr[k++] = temp[mid + 1 + j++];
}

void mergesort(vector<int>&arr, int st, int en)
{
    if(st >= en) return ;
    int mid = ((st+en)>>1);  
    mergesort(arr,st,mid);
    mergesort(arr,mid+1,en);
  
    merge(arr,st,en,mid);
}


void AFnaN()
{
    ll n;
    cin>>n;
    vector<ll>v(n);

    for(auto &it:v)
    {
        cin>>it;
    }

    mergesort(v,0,n-1);


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