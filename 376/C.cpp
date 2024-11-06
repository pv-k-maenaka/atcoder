#include <bits/stdc++.h>
using namespace std;

int main() {

    // 自分で書いたコード
    // TLEより不正解、ロジックも若干間違い
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n-1);
    for (auto& x : a) cin >> x;
    for (auto& x : b) cin >> x;
    

    vector<bool> ans(n, false);

    int tmp;
    
    for (int i = 0; i < n-1; i++) {
        int hobby_size = 0;
        int none_cnt = 0;
        for (int j = 0; j < a.size(); j++) {
            int diff = b[i] - a[j];
            if (j == 0) {
                tmp = diff;
                hobby_size = a[j];    
            }

            if (diff < 0) none_cnt++;

            if (abs(tmp) > diff && diff >= 0 && j != 0) {
                tmp = diff;
                hobby_size = a[j];
            }

            if (diff == 0) break;
        }
        if (none_cnt == a.size()) {
            cout << -1 << '\n';
            return 0;
        }
        auto newEnd = remove(a.begin(), a.end(), hobby_size);
        a.erase(newEnd, a.end());
    }

    for (auto x : a) cout << x << '\n';
    return 0;
}