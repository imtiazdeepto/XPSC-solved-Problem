//
// Solved at:
#include <bits/stdc++.h>
#include <iostream>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define tc    \
    int x;    \
    cin >> x; \
    while (x--)
#define all(x) (x).begin(), (x).end()
#define int long long
signed main() {
    Code By ImtiazDeepto
        tc {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int i;
        int ans = 1;
        priority_queue<int> pq;
        pq.push(ans + 1);
        for (i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) {
                ans = 1;
            } else {
                ans++;
            }
            pq.push(ans + 1);
        }
        cout << pq.top() << endl;
    }

    return 0;
}