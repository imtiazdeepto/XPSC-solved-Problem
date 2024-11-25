//https://codeforces.com/problemset/problem/1805/A
// Solved at:Nov/25/2024 23:22UTC+6
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
        int n;
        cin >> n;
        vector<int> v(n + 1);
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            ans ^= v[i];
        }
        if (n % 2 == 0)
        {
            if (ans == 0)
                cout << 0 << endl;
            else
                cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}