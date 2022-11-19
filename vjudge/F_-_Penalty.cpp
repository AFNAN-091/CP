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
#define sz 30005
typedef long long ll;
int rr[] = { -1, 1, 0, 0, -1, -1, 1, 1};
int cc[] = {0, 0, -1, 1, -1, 1, -1, 1};
/*--------------------------------------------------------------------*/
int pp ;
int cost;
void dfs(int u,vector<int>adj[], vector<int>w[],vector<int>visit)
{
    visit[u] = 1;
    
    for(int i=0; i<adj[u].size(); i++)
    {
        int node = adj[u][i];
        

        if(!visit[node])
        {
            if(cost<(cost+w[u][i]))
            {
                cost = cost+w[u][i];
                pp = node;
            }
           dfs(node,adj,w,visit);
        }
    }
}

void AFnaN()
{
  vector<int>adj[sz];
  vector<int>w[sz];
  ll n;
  cin>>n;
  for(int i=0; i<n-1; i++)
  {
    int u,v,z;
    cin>>u>>v>>z;
    //cout<<"sdj";
    adj[u].push_back(v);
    adj[v].push_back(u);
    w[u].push_back(z);
    w[v].push_back(z);
  }
 // cout<<"sfj";
  vector<int>visit(n,0);
  cost = 0;
  dfs(0,adj,w,visit);
  cost = 0;
  fill(visit.begin(),visit.end(),0);
  dfs(pp,adj,w,visit);
  cout<<cost<<endl;

}

int main()
{   
    FAsT  
    ll a, b, c, d, e, f, g, h, k, len, n, m, p, q, r, t, x, y, z;

    cin >> t;
    a = 1;
    while(t--)
    {
       cout<<"Case "<<a++<<": ";
       AFnaN();
       
    }

    exit(0);
}