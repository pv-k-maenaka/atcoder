#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<char> h(q);
    vector<int> t(q);

    for (int i = 0; i < q; i++) cin >> h[i] >> t[i];

    int r_pos = 2;
    int l_pos = 1;

    int oper_cnt = 0;

    for (int i = 0; i < q; i++) {
        if (h[i] == 'R') {
            while (r_pos != t[i]) {
                if (r_pos - l_pos > 0) {
                    r_pos %= n;
                    r_pos++;
                } else {
                    r_pos %= n;
                    r_pos--;
                }
                oper_cnt++;
                cout << 'R' << r_pos << '\n';
            }
        } else {
            while (l_pos != t[i]) {
                if (l_pos - r_pos > 0) {
                    l_pos %= n;
                    l_pos++;
                } else {
                    l_pos %= n;
                    l_pos--;
                }
                oper_cnt++;
                cout << 'L' << l_pos << '\n';
            }
        }
    }

    cout << oper_cnt << '\n';
    return 0;
}