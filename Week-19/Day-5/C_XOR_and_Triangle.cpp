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
bool isPowerOfTwo(int n) {
    if (n <= 0) return false;
    return (n & (n - 1)) == 0;
}
void solve() {
    int x;
    cin >> x;
    int ans = -1;

    if (isPowerOfTwo(x)) {
        cout << ans << endl;
        return;
    }
    for (int i = 1; i < x; i *= 2) {
        int a = x;
        int b = x - i;
        int c = x ^ x - i;
        if ((a + b > c) and (a + c > b) and (b + c > a)) {
            ans = x - i;
            cout << ans << endl;
            return;
        }
        // cout<<c<<endl;
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