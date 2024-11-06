#include <bits/stdc++.h>
using namespace std;

// 回答
/*
Q個の指示を順番に見ていきながら、現在の左手、右手の位置、および今までに行った操作回数の最小値を管理することを考えます。手の位置の管理は簡単なので、
この問題を解く上でメインになるのは、以下のようなクエリに答えるためのプログラムを書くことです。
・1以上N以下の整数from, to, ngが与えられる。円環上でパーツfromからパーツngを通らないように移動したいとき、移動回数の最小限は？（ただし、from != ng, to != ngが保証される）

これは、from, to, ngの大小関係によって場合分けをすることで解くことが出来ます。3つの整数の大小関係は6通りあるので、それらすべてを分けて考えてもよいですが、以下のようにすると2通りの場合分けで済み簡潔です

まず、from, toは入れ替えてしまっても問題ない（すなわち、fromからtoに移動してもtoからfromに移動しても移動回数は変わらない）ことに着目します。
これにより、from > toの場合はfromとtoを入れ替えることで、常にfrom <= toを満たすようにすることが出来ます。（このように、固定できる大小関係を固定しておくことで場合分けを減らすテクニックはしばしば有効です）

あとはngがどこにあるかが問題ですが、これは本質的に2通りしかありません：from < ng < toである場合とそれ以外の場合です。

前者については、from→（from-1）→・・・→ 1 → N →・・・→（to+１）→ toと移動するのが最適なので、移動回数は（from-1）+ 1 +（N-to）= N + from - toです。

後者については、from →（from+1）→・・・ →（to-1）→ toと移動するのが最適なので、移動回数はto - fromです。
よって、この場合分けを実装することで本問題のO(N)で解くことが出来ます
*/

int num_move(int n, int from, int to, int ng) {
    if (from > to) swap(from, to);
    if (from < ng && ng < to) {
        return n + from - to;
    } else {
        return to - from;
    }
}

int main() {
    int n, q;
    cin >> n >> q;
    int l = 1, r = 2;
    int ans = 0;
    for (int i = 0; i < q; i++) {
        char h;
        int t;
        cin >> h >> t;
        if (h == 'L') {
            ans += num_move(n, l, t, r);
            l = t;
        } else {
            ans += num_move(n, r, t, l);
            r = t;
        }
    }
    cout << ans << '\n';
    return 0;
}

