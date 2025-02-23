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
        char ch = 'a';
        int cnt = k;
        for (int i = 1; i <= n * k; i++) {
            cout << ch++;
            cnt--;
            if (cnt == 0) {ch = 'a';
            cnt=k;
            }
        }
        cout << endl;
    }

    return 0;
}