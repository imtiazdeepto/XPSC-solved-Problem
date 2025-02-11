/*
  In the name of Allah, The Most Gracious and The Most Merciful.
*/
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
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
        int x, y;
        cin >> x >> y;
        if (x + 1 == y) {
            yes;
        } else if (x + 1 < y) {
            no;
        } else if (x + 1 > y) {
            int ans = x + 1 - y;
            if (ans % 9 == 0) {
                yes;
            } else {
                no;
            }
        }
    }

    return 0;
}