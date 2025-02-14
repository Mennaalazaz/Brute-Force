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
        vector<int> a(n);
        vector<int> b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        sort(b.begin(), b.end());
        // first: Handle the first value
        a[0]=min(a[0],b[0]-a[0]);

        // second : handle the rest values
        for (int i = 1; i < n; i++) {
            int op1=a[i],op2=INT_MIN;
            auto p=lower_bound(b.begin(),b.end(),a[i]+a[i-1]);
            if(p!=b.end() ) {
                op2=*p-a[i];
            }
            if(op1>op2)  swap(op1,op2); // make op1 store the minimum of both
            if(op1>=a[i-1]) { // it is the target to make array a is non-decreasing
                a[i]=op1;
            }
            else if(op1<a[i-1]) { // if it is smaller than the previous value so make a[i]=op2 which store the maximum value
                a[i]=op2;
            }
        }
        if(is_sorted(a.begin(),a.end())) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}

int main() {
    fastIO();
    solve();
    return 0;
}

