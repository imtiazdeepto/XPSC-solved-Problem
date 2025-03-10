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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> a(n, 0);
    int match = v.back(), check = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (v[i] == match) {
            check++;
        }
        a[i] = check;
    }
    if (v[0] == v.back()) {
        if (a[0] >= k) {
            yes;
            return;
        }
    }
    int idx, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == v[0]) {
            cnt++;
            idx = i;
        }
        if (cnt % k == 0 and a[idx + 1] >= k) {
            yes;
            return;
        }
    }
    no;
    // cout << "Cnt->" << cnt << endl;
    // for (auto el : a) {
    //     cout << el << " ";
    // }
    // cout << endl;
}

signed main() {
    Code By ImtiazDeepto

        tc {
        solve();
    }

    return 0;
}