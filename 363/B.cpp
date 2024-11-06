#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t, p;
    cin >> n >> t >> p;
    vector<int> l(n);
    for (int &i : l) cin >> i;
    sort(l.rbegin(), l.rend());

    if (l[p-1] >= t) cout << 0 << '\n';
    else cout << t - l[p-1] << '\n';

    return 0;
}