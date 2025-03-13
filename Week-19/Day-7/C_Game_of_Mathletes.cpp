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

int count(vector<int>& arr, int K) {
    unordered_set<int> seen;
    // set<pair<int, int>> uniquePairs;
int cnt=0;
    for (int num : arr) {
        int complement = K - num;
        if (seen.count(complement)) {
            int first = min(num, complement);
            int second = max(num, complement);
            
            // uniquePairs.insert({first, second});
        }
        seen.insert(num);
    }

    return cnt;
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(all(v));
    for (auto el : v) {
        cout << el << " ";
    }
    cout << endl;
    int ans = (count(v, k));
    cout << ans << endl;
    // cout << min((n / 2), ans) << endl;
}

signed main() {
    Code By ImtiazDeepto

        tc {
        solve();
    }

    return 0;
}