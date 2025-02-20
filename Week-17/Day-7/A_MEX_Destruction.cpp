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
bool countSubarrays(vector<int> &a, int n) {
    int i = 0, j = n;
    while (a[i] == 0) i++;
    while (a[j - 1] == 0) j--;

    for (int k = i; k < j; k++) {
        if (a[k] == 0) return true;
    }
    return true;
}
signed main() {
    Code By ImtiazDeepto

        tc {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &x : a) cin >> x;
        auto countSubarrays = [](vector<int> &a, int n) {
            int i = 0, j = n;
            while (a[i] == 0) i++;
            while (a[j - 1] == 0) j--;

            for (int k = i; k < j; k++) {
                if (a[k] == 0) return true;
            }
            return false;
        };
        int zero = count(all(a), 0), ans = 0;
        if (zero == n)
            cout << 0 << endl;
        else if (!countSubarrays(a, n)) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }

    return 0;
}