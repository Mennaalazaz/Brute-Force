#include <bits/stdc++.h>
using namespace std;
#define ll long long

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int t; cin >> t;
    while (t--) {
        int n,m; cin >> n >> m;
        vector<pair<ll, vector<ll>>> s(n);
        for (int i = 0; i < n; i++) {
            auto &v=s[i].second;
            v.resize(m);
            for (int j = 0; j < m; j++) {
                cin>>v[j];
                s[i].first+=v[j];
            }
        }
        sort(s.rbegin(), s.rend()); // sort descendingly

        // preform prefix
        ll pre[n*m+4]={},idx=1,ans=0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                pre[idx]=pre[idx-1]+s[i].second[j];
                ans+=pre[idx];
                idx++;
            }
        }
        cout<<ans<<"\n";
    }
}

int main() {
    fastIO();
    solve();
    return 0;
}

