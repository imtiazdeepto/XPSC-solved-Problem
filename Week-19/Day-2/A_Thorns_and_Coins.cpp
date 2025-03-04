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

void solve() {
    int m;
    cin >> m;
    string s;
    cin >> s;
    int teka = 0, kata = 0;
    for (int i = 0; i < m; i++) {
        if (s[i] == '*') {
            if (s[i + 1] == '*') {
                break;
            }
        } else if (s[i] == '@') {
            teka++;
        } 
    }
    cout << teka << endl;
}

signed main() {
    Code By ImtiazDeepto

        tc {
        solve();
    }

    return 0;
}