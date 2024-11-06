#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s;
    cin >> t;
    int n = min(s.size(), t.size());
    for (int i = 0; i < n; i++) {
        if (s[i] != t[i]) {
            cout << i+1 << '\n';
            return 0;
        }
    }

    if (s.size() != t.size()) cout << n+1 << '\n';
    else cout << 0 << '\n';

    return 0;
}