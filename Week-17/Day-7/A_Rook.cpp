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
        string s;
        cin >> s;
        int n = s[1] - '0';
        // cout << n << endl;
        for (int i = 1; i <= 8; i++) {
            if (i != n)
                cout << s[0] << i << endl;
        }
        for (char i = 'a'; i <= 'h'; i++) {
            if (i != s[0])
            cout << i<< s[1] << endl;
        }
    }

    return 0;
}