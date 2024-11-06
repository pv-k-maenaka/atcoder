#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string keyboard = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int move = 0;

    int target = 0;
    int crr_i = s.find('A');
    
    for (int i = 0; i < s.size(); i++) {
        target = s.find(keyboard[i]);
        move += abs(target-crr_i);
        crr_i = target;
    }

    cout << move << '\n';
    return 0;
}