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
        int n, k;
        cin >> n >> k;
        vector<int> v;
        v.push_back(0);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        v.push_back(k);
        int mx = 0;
        for (int i = 1; i < v.size(); i++) {
            if (i == v.size() - 1) {
                mx = max(mx, (2 * (v[i] - v[i - 1])));
            }
            mx = max(mx, (v[i] - v[i - 1]));
        }
        cout << mx << endl;
    }

    return 0;
}