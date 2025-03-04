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
    int low = -1, high = INT_MAX;
    map<int, bool> mp;
    while (n--) {
        int a, x;
        cin >> a >> x;
        if (a == 1) {
            low = max(low, x);
        }
        if (a == 2) {
            high = min(high, x);
        }
        if (a == 3) {
            mp[x] = true;
        }
    }
    int cnt = 0;
    for (auto [x, y] : mp) {
        if (x >= low and x <= high) cnt++;
    }
    int ans = ((high - low) - cnt) + 1;
    if (ans >= 0)
        cout << ans << endl;
    else
        cout << 0 << endl;
}

signed main() {
    Code By ImtiazDeepto

        tc {
        solve();
    }

    return 0;
}