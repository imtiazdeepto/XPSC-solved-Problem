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
        // Atcoder-B
        string S;
    cin >> S;
    int n = S.size();
    int ans = 0;
    for (int i = 0; i < n - 2; i++) {
        if (S[i] == 'A') {
            for (int j = i + 1; j < n - 1; j++) {
                if (S[j] == 'B') {
                    int k = 2 * j - i;
                    if (k < n and S[k] == 'C') {
                        ans++;
                    }
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}