#include <iostream>
#include <string>

using namespace std;

string generate_expression(int n, int x, int cur_sum, string s) {
    if (s.length() == n) {
        if (cur_sum == x) {
            return s;
        } else {
            return "";
        }
    }

    for (char op : {'+', '-', '*'}) {
        // Try the current operator at the current position
        int new_sum;
        if (op == '+') {
            new_sum = cur_sum + (n - s.length());
        } else if (op == '-') {
            new_sum = cur_sum - (n - s.length());
        } else {
            new_sum = cur_sum * (n - s.length());
        }

        // Recursively try out all possible strings
        string res = generate_expression(n, x, new_sum, s + op);
        if (!res.empty()) {
            return res;
        }
    }

    // Exhausted all possibilities, return empty string
    return "";
}

int main() {
    int n = 3;
    int x = 4;
    string s = generate_expression(n, x, n+1, "");

    if (!s.empty()) {
        cout << s << endl;
    } else {
        cout << "-1" << endl;
    }

    return 0;
}
