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
        int ans = 0, cnt = 0;
        ans = (n / 15) * 3;
        int rest = n % 15;
        for (int i = 0; i <= rest; i++) {
            if (i % 3 == i % 5) cnt++;
        }
        cout << ans + cnt << endl;
    }

    return 0;
}