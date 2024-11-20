// https://codeforces.com/problemset/problem/1875/A
// Solved at:Nov/20/2024 00:06UTC+6
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
        int m, c, t;
        cin >> m >> c >> t;
        vector<int> v;
        for (int i = 0; i < t; i++)
        {
            int n;
            cin >> n;
            if (n >= m)
                v.push_back(m-1);
            else
            {
                v.push_back(n);
            }
        }

        int tt, ans = c;
        for (int i = 0, x = 0; i < t; i++)
        {
            // ans += min(m - 1, v[i]);
            ans += v[i];
        }

        cout << ans << endl;
    }

    return 0;
}