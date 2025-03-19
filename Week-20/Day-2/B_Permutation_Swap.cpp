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
    int n, x;
    cin >> n;
    vector<int> v;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        v.push_back(abs(x - i));
        //kono value tar sorted index e niye jawar jonno needed K er man abs(x-i);
    }
    int ans = v[0];
    for (auto el : v) {
        ans = __gcd(ans, el);
        //sobgulu k er man GCD ber korle emon man asbe ja sobar khetre projojjo
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