//https://codeforces.com/problemset/problem/1705/B
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
        int n;
        cin >> n;
        vector<int> v(n);
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] > 0 and ans == 0)
            {
                ans = n - (i + 1);
            }
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (v[i] > 1)
            {
                ans += v[i] - 1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}