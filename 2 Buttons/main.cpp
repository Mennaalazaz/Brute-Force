#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n, m;
    cin >> n >> m;

    int steps = 0;

    while (m != n) {
        if (m > n) {
            if (m % 2 == 0) {
                m /= 2;
            } else {
                m += 1;
            }
        } else {
            m += 1;
        }
        steps++;
    }

    cout << steps << endl;
}
int main() {
    fastIO();
    solve();
    return 0;
}
