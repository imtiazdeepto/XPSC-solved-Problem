//
// Solved at:
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define all(x) (x).rbegin(), (x).rend()
#define int long long
#define tc    \
    int x;    \
    cin >> x; \
    while (x--)
const int N = 1e8;

signed main()
{

    Code By ImtiazDeepto

        int n,
        q;
    cin >> n >> q;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    vector<int> diffArray(n + 1, 0);
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        diffArray[l - 1]++;
        diffArray[r]--;
    }
    // prefix sum
    for (int i = 1; i <= n; i++)
    {
        diffArray[i] += diffArray[i - 1];
    }
    sort(all(diffArray));
    sort(all(v));
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (diffArray[i] * v[i]);
    }
    cout << ans << endl;

    return 0;
}