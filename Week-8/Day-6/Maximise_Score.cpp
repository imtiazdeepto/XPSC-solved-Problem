//https://www.codechef.com/problems/MAXIMSCORE
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
        int x;
        cin >> x;
        vector<int> v(x);
        for (auto &p : v)
            cin >> p;
        for (int i = 0; i < x - 1; i++)
        {
            v[i] = abs(v[i] - v[i + 1]);
        }
        int ans = INT64_MAX;
        ans = min(v[0], min(ans, v[x - 2]));
        for (int i = 1; i < x - 1; i++)
        {
            int mx = max(v[i], v[i - 1]);
            ans = min(ans, mx);
        }
        cout << ans << endl;
    }

    return 0;
}