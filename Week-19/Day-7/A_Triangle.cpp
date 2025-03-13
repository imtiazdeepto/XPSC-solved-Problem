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
    vector<int> v(4);
    for (int &i : v) cin >> i;
    sort(all(v));

    if (v[0] + v[1] > v[2] or v[2] + v[1] > v[3]) {
        cout << "TRIANGLE" << endl;
        return;
    }
    if (v[0] + v[1] == v[2] or v[2] + v[1] == v[3]) {
        cout << "SEGMENT" << endl;
        return;
    }
    cout << "IMPOSSIBLE" << endl;
}

signed main() {
    Code By ImtiazDeepto

    // tc {
    solve();
    // }

    return 0;
}