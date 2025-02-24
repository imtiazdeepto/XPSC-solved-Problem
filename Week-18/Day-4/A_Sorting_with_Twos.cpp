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
bool isPowerOfTwo(int x) {
    return x && (!(x & (x - 1)));
}
signed main() {
    Code By ImtiazDeepto

        tc {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 0; i < n; i++) cin >> v[i];

        bool sentinel = true;
        int j = 0;
        int nxt = 1;
        while (j < n) {
            int x = min(nxt, n);
            for (int i = j + 1; i < x; i++) {
                if (v[i] < v[i - 1]) {
                    sentinel = false;
                }
            }
            if (!sentinel) break;
            j = nxt;
            nxt *= 2;
        }
        if (sentinel) {
            yes;
        } else {
            no;
        }
        // cout << endl;
    }

    return 0;
}