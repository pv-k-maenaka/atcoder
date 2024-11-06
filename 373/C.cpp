#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int &i : a) cin >> i;
    for (int &i : b) cin >> i;

    int a_max = *max_element(begin(a), end(a));
    int b_max = *max_element(begin(b), end(b));

    int ans = a_max + b_max;
    cout << ans << '\n';
    return 0;
}