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
        int n;
        cin >> n;
        map<int, int> mp;
        bool found = false;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x]++;
            if (mp[x] >= 2) {
                found = true;
                ans = x;
            }
        }
        if (found) {
            cout << 1 << endl;
            cout << ans << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}