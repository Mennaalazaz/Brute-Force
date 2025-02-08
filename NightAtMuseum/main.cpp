#include <bits/stdc++.h>
using namespace std;
#define ll long long

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    string s; cin >> s;
    int n = s.length(); char lastchar = 'a'; ll ans=0;
    for (int i = 0; i < n; i++) {
        ll distance=abs(lastchar-s[i]);
        ans+=min(distance,26-distance); // decide go clockwise or counter-clock-wise
        lastchar = s[i];
    }
    cout << ans << '\n';
}

int main() {
    fastIO();
    solve();
    return 0;
}
