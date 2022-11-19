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
#define yes cout<< "YES\n"
#define no cout<< "NO\n"
#define f(x) cout<< x <<endl
#define in(x) cin>> x 
#define er(x) cerr << x << endl
#define FAsT ios_base::sync_with_stdio(false);cin.tie(NULL);
#define sz 50000
#define intmax INT_MAX
#define intmin INT_MIN
typedef long long ll;
typedef vector<long long> vi;
int rr[] = { -1, 1, 0, 0, -1, -1, 1, 1};
int cc[] = {0, 0, -1, 1, -1, 1, -1, 1};
/*--------------------------------------------------------------------*/

int precedence(char c) {
	if (c == '(' || c == ')')
		return 0;
	if (c == '+' || c == '-')
		return 1;
	if (c == '*' || c == '/')
		return 2;
	return -1;
}

void check(stack<char> &st, char token, string &ans) {
	if (st.empty() || precedence(st.top()) < precedence(token)) {
		st.push(token);
	} else {
		while (!st.empty() && (precedence(st.top()) >= precedence(token))) {
			cout<<st.top();
			st.pop();
		}
		st.push(token);
	}
}

int main() {
	int n;
	int count = 0;

	cin >> n;
	cin.ignore();
	cin.ignore();

	while (n--) {
		count++;
		if(count >1) cout << endl;

		stack<char> st;
		string ans = "";
		string token;

		while (1) {
			getline(cin, token);
			if (token.size() == 0 || !cin)
				break;

			if (isdigit(token.at(0))) {
				cout<<token.at(0);
			} else if (token.at(0) == ')') {
				while (st.top() != '(') {
					cout<<st.top();
					st.pop();
				}
				st.pop();
			} else if (token.at(0) == '(') {
				st.push('(');
			} else {
				check(st, token.at(0), ans);
			}
		}

		while (!st.empty()) {
			cout<<st.top();
			st.pop();
		}
	}

	return 0;
}