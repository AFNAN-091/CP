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
#define MAX_N 105
#define INF 1e9 
typedef long long ll;
int rr[] = { -1, 1, 0, 0, -1, -1, 1, 1};
int cc[] = {0, 0, -1, 1, -1, 1, -1, 1};
/*--------------------------------------------------------------------*/

void AFnaN()
{
  
}

int E[MAX_N+][MAX_N+1];
bool V[MAX_N];


int main(){
	int a, b, c = 1;
	while (scanf("%d%d", &a, &b) == 2 && a && b){
		int count = 0, sum = 0;
		for (int i = 0; i <= MAX_N; i++)
			for (int j = 0; j <= MAX_N; j++)
				E[i][j] = INF;
		E[a][b] = 1;
		while (scanf("%d%d", &a, &b) == 2 && a && b)
			E[a][b] = 1, V[a] = V[b] = true;
		for (int k = 1; k <= MAX_N; k++)
			for (int i = 1; i <= MAX_N; i++)
				for (int j = 1; j <= MAX_N; j++)
					E[i][j] = min(E[i][j], E[i][k] + E[k][j]);
		for (int i = 1; i <= MAX_N; i++)
			for (int j = 1; j <= MAX_N; j++)
				if (i != j && E[i][j] != INF)
					sum += E[i][j], count++;
		printf("Case %d: average length between pages = %.3lf clicks\n", c++, (double)sum / count);
	}
	exit(0);
}