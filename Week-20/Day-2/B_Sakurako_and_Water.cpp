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
    vector<vector<int>> v(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mp[i - j] = min(mp[i - j], v[i][j]);
            //diagonal er minimum value  store kore sum find korte hbe
        }
    }
    int sum = 0;
    for (auto &el : mp) {
        sum += el.second;
    }
    cout << -1 * sum << endl;
}

signed main() {
    Code By ImtiazDeepto

        tc {
        solve();
    }

    return 0;
}