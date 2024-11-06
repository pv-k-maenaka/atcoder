#include <bits/stdc++.h>
using namespace std;

// 回答
/*
右手と左手が現在それぞれどの鍵盤の上にあるかを管理しながら、1,2, ..., N回目に押す鍵盤を順番に見ていって、
手の移動が必要になったタイミングでその移動の疲労度を順序答えに加算していけばよいです。

下記の実装では、長さ2の配列posを用意し、pos[0], pos[1]がそれぞれ左手、右手の現在の位置を管理するようにしています。
また、それぞれの手の位置の初期値を-1とし、-1から他の鍵盤への移動の際には疲労度を答えに加算しないことで、
「演奏開始前に適切な位置（その他で最初に押す鍵盤の位置）に手を置く」という動作を実現しています。
*/
int main() {
    int n;
    cin >> n;
    vector<int> pos = {-1, -1}; // 0: left, 1: right
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int a;
        char s;
        cin >> a >> s;
        int hand = (s == 'R');
        if (pos[hand] != -1) ans += abs(pos[hand] - a);
        cout << ans << '\n';
        pos[hand] = a;
    }
    cout << ans << '\n';

    return 0;
}