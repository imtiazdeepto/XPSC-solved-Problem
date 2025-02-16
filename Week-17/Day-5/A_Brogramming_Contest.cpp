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
        string s;
        cin >> s;
        int ones = count(s.begin(), s.end(), '1');
        if (ones == n) {
            cout << 1 << endl;
        } else if (ones == 0) {
            cout << 0 << endl;
        } else {
            int count_10 = 0;
            for (int i = 0; i < n - 1; i++) {
                if (s[i] == '1' && s[i + 1] == '0') {
                    count_10++;
                }
            }
            int ans = 0;
            if (s.back() == '1') ans = 1;
            ans+=count_10 * 2;
            cout <<ans << endl;
        }
    }

    return 0;
}