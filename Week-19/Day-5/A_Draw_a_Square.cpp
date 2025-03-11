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
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (abs(a) == abs(b) and abs(b) == abs(c) and abs(c) == abs(d)) {
        yes;
    } else {
        no;
    }
}

signed main() {
    Code By ImtiazDeepto

        tc {
        solve();
    }

    return 0;
}