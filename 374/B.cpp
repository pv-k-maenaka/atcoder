#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    if (s.size() == t.size()) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != t[i]) {
                cout << i+1 << '\n';
                return 0;
            }
        }
    } else {
        int len;
        if (s.size() < t.size()) len = s.size();
        else len = t.size();
        for (int i = 0; i < len; i++) {
            if (s[i] != t[i]) {
                cout << i+1 << '\n';
                return 0;
            }
        }
        cout << len+1 << '\n';
        return 0;
    }

    cout << 0 << '\n';

    return 0;
}