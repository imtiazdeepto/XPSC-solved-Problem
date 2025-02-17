/*
  In the name of Allah, The Most Gracious and The Most Merciful.
*/
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;
#define all(x) (x).begin(), (x).end()
#define int long long
#define tc    \
    int x;    \
    cin >> x; \
    while (x--)
const int N = 1e8;
signed main() {
    Code By ImtiazDeepto

        int n;
    cin >> n;
    auto is_lucky = [](int n) {
        string s = to_string(n);
        for (char c : s) {
            if (c != '4' && c != '7') {
                return false;
            }
        }
        return true;
    };

    for (int i = 1; i <= n; i++) {
        if (is_lucky(i)) {
            if (n % i == 0) {
                yes;
                return 0;
            }
        }
    }
    no;
    return 0;
}
