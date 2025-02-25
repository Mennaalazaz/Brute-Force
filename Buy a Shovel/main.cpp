#include <iostream>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    int x = 1; // Start with 1 shovel
    while (true) {
        int total = x * k; // Total cost for x shovels
        // Check if total can be paid without change
        if (total % 10 == 0 || total % 10 == r) {
            cout << x << endl;
            break;
        }
        x++; // Try the next number of shovels
    }

    return 0;
}