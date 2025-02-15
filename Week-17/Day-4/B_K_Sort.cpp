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
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int ans = 0, cnt = 0;
        int maxdiff = 0;
        for (int i = 0; i < n - 1; i++) {
            if (v[i] > v[i + 1]) {
                int diff = v[i] - v[i + 1];
                ans = ans + diff;
                maxdiff = max(maxdiff, diff);
                v[i + 1] = v[i];
            }
        }
        ans += maxdiff;

        // cout<<"cnt: "<< cnt<<endl;
        cout << ans << endl;
    }

    return 0;
}