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

        tc {
        int n,
        k;
    cin >> n >> k;
    vector<int> v(n);
    int evn = 0;
    int minMOd = k;
    bool primeDivisible = false;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (k == 4) {
            if (v[i] % 2 == 0) evn++;
        }
        if (k == 2 || k == 3 || k == 5) {
            if (v[i] % k == 0) primeDivisible = true;
        }
        int l = (v[i] % k);
        if (l == 0) minMOd = 0;
        // cout << l << endl;
        minMOd = min(minMOd, (k - l));
    }
    // cout << "Mod-> " << minMOd << endl;
    if ((k == 2 || k == 3 || k == 5) and primeDivisible) {
        cout << 0 << endl;
    } else if ((k == 2 || k == 3 || k == 5) and !primeDivisible) {
        sort(all(v));
        int ans = INT16_MAX;
        int x = v[0] % k;
        ans = v[0];
        for (int i = 1; i < n; i++) {
            if (x < (v[i] % k)) {
                ans = v[i];
                x = (v[i] % k);
            }
        }
        // cout << ans << endl;
        int cnt = 0;
        while (ans % k) {
            cnt++;
            ans++;
        }

        cout << cnt << endl;
    } else if (k == 4) {
        if (evn > 1)
            cout << 0 << endl;
        else if (evn == 1) {
                       cout << min(minMOd, 1LL) << endl;
        } else if (evn == 0) {
            cout << min(minMOd, 2LL) << endl;
        }
    }
    }

    return 0;
}