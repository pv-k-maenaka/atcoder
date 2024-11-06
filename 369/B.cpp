#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<char> s(n);
    for (int i = 0; i < n; i++) cin >> a[i] >> s[i];

    bool r = false;
    bool l = false;

    int r_crr;
    int l_crr;

    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'R') {
            // R
            if (!r) {
                r_crr = a[i];
                r = true;
            } else {
                ans += abs(a[i] - r_crr);
                r_crr = a[i];   
            }
        } else {
            // L
            if (!l) {
                l_crr = a[i];
                l = true;
            } else {
                ans += abs(a[i] - l_crr);
                l_crr = a[i];
            }
        }
    }

    cout << ans << '\n';

    return 0;
}