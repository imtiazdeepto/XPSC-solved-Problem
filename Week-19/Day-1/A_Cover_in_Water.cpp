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
    string s;
    cin >> s;
    int cnt = 0;
    int ans = count(all(s), '.');
    for (int i = 0; i < n; i++) {
        if (s[i] == '.') {
            cnt++;
            if (cnt == 3) {
                cout << 2 << endl;
                return;
            }
        } else {
            cnt = 0;
        }
    }
    cout << ans << endl;
}

signed main() {
    Code By ImtiazDeepto

        tc {
        solve();
    }

    return 0;
}