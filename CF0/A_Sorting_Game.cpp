#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    long long ones = 0, inv = 0;

    // Count inversions (1 before 0)
    for (char c : s) {
        if (c == '1') ones++;
        else inv += ones;
    }

    if (inv == 0) {
        cout << "Bob\n";
        return;
    }

    if (inv % 2 == 0) {
        cout << "Bob\n";
        return;
    }

    // Alice wins — find one valid move
    cout << "Alice\n";

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            for (int j = i + 1; j < n; j++) {
                if (s[j] == '0') {
                    cout << 2 << "\n";
                    cout << i + 1 << " " << j + 1 << "\n";
                    return;
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
