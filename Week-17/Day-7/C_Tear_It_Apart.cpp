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
    int t;    \
    cin >> t; \
    while (t--)
const int N = 1e8;
bool check(int n) {
    if (n <= 0) return false;
    return (n & (n - 1)) == 0;
}
signed main() {
    Code By ImtiazDeepto

        tc {
        string str;
        cin >> str;
        int finalAns = LLONG_MAX;
        for (char ch = 'a'; ch <= 'z'; ch++) {
            int lst = 1, ans = 0;
            bool exists = false;
            for (int i = 0; i < str.size(); i++) {
                if (str[i] == ch) {
                    exists = true;
                    break;
                }
            }

            if (!exists) {
                continue;
            }
            for (int i = 0; i < str.size(); i++) {
                if (str[i] == ch) {
                    int subarray = i - lst - 1;
                    if (check(subarray)) {
                        int cnt = log2(subarray) + 1;
                        ans = max(ans, cnt);
                    } else {
                        int cnt = ceil(log2(subarray));
                        ans = max(ans, cnt);
                    }
                    lst = i;
                }
            }
            if (str[str.size() - 1] != ch) {
                int subarray = str.size() - lst - 1;
                if (check(subarray)) {
                    int cnt = log2(subarray) + 1;
                    ans = max(ans, cnt);
                } else {
                    int cnt = ceil(log2(subarray));
                    ans = max(ans, cnt);
                }
            }
            finalAns = min(finalAns, ans);
        }
        cout << finalAns << endl;
    }

    return 0;
}
