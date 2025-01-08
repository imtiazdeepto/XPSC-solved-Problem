#include "bits/stdc++.h"
#include<iostream>
using namespace std;
#define fastIO()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define int long long
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define endl '\n'
#define pb push_back
/*------------------------------------------*/
void solve() {
    int n, x, k;
    string s;
    cin >> n >> x >> k >> s;
    vector<int> pfSum(n, 0);
    int onecnt = 0, zerocnt = 0;
    int idx = 0;
    while (s[idx] == '0' and idx < n) idx++;
    for (int i = idx; i < n; ++i) {
        if (s[i] == '1') {
            onecnt++;
        } else {
            zerocnt++;
            pfSum[i] = onecnt;
        }
    }
    
    for (int i = 1; i < n; ++i) {
        pfSum[i] += pfSum[i - 1];
    }
    zerocnt += idx;
    if (onecnt == n || zerocnt == n || (pfSum[n - 1] <= x and pfSum[n - 1] % k == 0)) {
        cout << 1 << endl;
    } else {
        cout << 2 << endl;
    }
}

int32_t main() {
    fastIO();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}