#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c;
    cin >> n >> c;
    vector<int> t(n);
    for (int &i : t) cin >> i;

    int ans = 1;

    int get = 0;

    for (int i = 1; i < n; i++) {
        if (t[i] - t[get] >= c) {
            ans++;
            get = i;
        }
    }

    cout << ans  << '\n';

    return 0;
}