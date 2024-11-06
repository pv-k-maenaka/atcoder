#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];
    
    x.push_back(0);
    y.push_back(0);

    double cost = 0;

    int pos_x = 0;
    int pos_y = 0;

    for (int i = 0; i < n+1; i++) {
        cost += sqrt(pow(pos_x-x[i], 2) + pow(pos_y-y[i], 2));
        pos_x = x[i];
        pos_y = y[i];
    }

    cout << fixed << setprecision(15) << cost << '\n';
    
    return 0;
}