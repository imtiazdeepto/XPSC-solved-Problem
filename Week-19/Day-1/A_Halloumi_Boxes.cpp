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
    for (int &i : v) cin >> i;
    if (is_sorted(all(v)) or k >= 2) {
        yes;
        return;
    }
    no;
}

signed main() {
    Code By ImtiazDeepto

        tc {
        solve();
    }

    return 0;
}