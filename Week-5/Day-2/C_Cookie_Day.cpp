//
// Solved at:
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define all(x) (x).begin(), (x).end()
#define int long long
#define tc    \
    int x;    \
    cin >> x; \
    while (x--)
const int N = 1e8;

signed main()
{

    Code By ImtiazDeepto

        tc
    {
        int n, c;
        cin >> n >> c;
        vector<int> v(n);
        int mx = 0, mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mx = max(mx, v[i]);
            int ans = v[i] % c;
            if (v[i] >= c)
            {
                mn = min(mn, v[i] % c);
                // cout << " mn = " << ans << endl;
            }
        }
        // cout << endl;
        if (mx < c)
        {
            cout << -1 << endl;
            continue;
        }
        else
            cout << mn << endl;
    }

    return 0;
}