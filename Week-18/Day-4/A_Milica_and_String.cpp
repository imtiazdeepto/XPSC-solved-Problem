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
        int k;
        cin >> k;
        string s;
        cin >> s;

        int check = count(all(s), 'B');
        if (check == k) {
            cout << 0 << endl;
        } else if (k == 0) {
            cout << 1 << endl;
            cout << n << " " << 'A' << endl;
        } else if (check > k) {
            int cnt = check;
            for (int i = 0; i < n; i++) {
                if (s[i] == 'B') cnt--;

                if (cnt == k) {
                    cout << 1 << endl;
                    cout << i + 1 << " " << 'A' << endl;
                    break;
                }
            }
        } else {
            int cnt = check;
            for (int i = 0; i < n; i++) {
                if (s[i] == 'A') cnt++;
                if (cnt == k) {
                    cout << 1 << endl;
                    cout << i + 1 << " " << 'B' << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
