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
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) cin >> a[i];
        map<int, int> mp;
        for (int i = 1; i <= n; i++) {
            mp[a[i]]++;
        }
        if (mp.size() == 1) {
            no;
        } else {
            yes;

            int city = -1;
            for (int i = 2; i <= n; i++) {
                if (a[1] != a[i]) {
                    cout << 1 << " " << i << endl;
                    city = i;
                }
            }
            for (int i = 2; i <= n; i++) {
                if (a[i] == a[1]) {
                    cout << city << " " << i << endl;
                }
            }
        }
    }
    return 0;
}