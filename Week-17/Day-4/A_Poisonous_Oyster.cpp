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
        // Atcoder-A
        string s,
        s2;
    cin >> s >> s2;
    if (s == "sick" and s2 == "fine") {
        cout << 2 << endl;
    } else if (s2 == "sick" and s == "fine") {
        cout << 3 << endl;
    } else if (s == "fine" and s2 == "fine") {
        cout << 4 << endl;
    } else {
        cout << 1 << endl;
    }

    return 0;
}