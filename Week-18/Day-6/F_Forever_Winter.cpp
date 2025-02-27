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
        map<int, int> mp;
        map<int, set<int>> v;
        for (int i = 0; i < k; i++) {
            int a, b;
            cin >> a >> b;
            v[a].insert(b);
            v[b].insert(a);
            mp[a]++;
            mp[b]++;
        }
        int leaf = -1;
        for (auto [x, y] : mp) {
            if (y == 1) {
                leaf = x;
                break;
            }
        }
        int parentOfleaf = -1;
        int parentvertics = -1;
        for (auto [x, y] : mp) {
            if (v[x].find(leaf) != v[x].end()) {
                parentOfleaf = x;
                parentvertics = y - 1;
            }
        }
        int ans_X, ans_Y;
        for (auto [x, y] : mp) {
            if (v[x].find(parentOfleaf) != v[x].end() and y > 1) {
                ans_X = y;
                // ans_Y=y;
            }
        }

        // cout<<leaf<<endl;
        // cout<<parentOfleaf<<endl;
        // cout<<parentvertics<<endl;
        cout << ans_X << " " << parentvertics << endl;
    }

    return 0;
}