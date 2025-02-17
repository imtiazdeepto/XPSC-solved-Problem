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
        int mx = 0;
        vector<int> a(n);
        for (auto &i : a) cin >> i;
        sort(all(a));
        int cnt = 0;
        int maxcnt = 0;
        map<int, int> freq;
        for (int i = 0; i < n; i++) {
            if (a[i] == a[n - 1]) cnt++;
            freq[a[i]]++;
        }
        auto is_odd = [](map<int, int> freq) {
            for (auto &[k, v] : freq) {
                if (v % 2) return true;
            }
            return false;
        };
        // cout << cnt << endl;
        if (cnt % 2) {
            yes;
        } else {
            if (is_odd(freq)) {
                yes
            } else {
                no;
            }
        }
    }

    return 0;
}