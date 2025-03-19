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

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &i : v) cin >> i;
    for (int i = 0; i < n; i++) {
        if (v[i] <= 2 * (max(i, n - i - 1))) {
            no;
            return;
        }
    }
    yes;
}

signed main() {
    Code By ImtiazDeepto

        tc {
        solve();
    }

    return 0;
}