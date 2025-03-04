#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Find the minimum and maximum heights
    int min_height = *min_element(v.begin(), v.end());
    int max_height = *max_element(v.begin(), v.end());

    // Find all positions of the shortest and tallest towers
    vector<int> min_positions, max_positions;
    for (int i = 0; i < n; i++) {
        if (v[i] == min_height) {
            min_positions.push_back(i);
        }
        if (v[i] == max_height) {
            max_positions.push_back(i);
        }
    }

    // Calculate the minimum distance between any min_position and any max_position
    int min_dist = INT_MAX;
    for (int min_pos : min_positions) {
        for (int max_pos : max_positions) {
            min_dist = min(min_dist, abs(max_pos - min_pos));
        }
    }

    cout << min_dist << endl;
}

int main() {
    fastIO();
    solve();
    return 0;
}