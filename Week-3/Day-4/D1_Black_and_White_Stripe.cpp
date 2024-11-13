// https://codeforces.com/problemset/problem/1690/D
// Solved at:Nov/13/2024 03:13UTC+6
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
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        vector<int> v(n + 1);
        //prefix sum approch
        int r = 0, l = 1, ans = LONG_LONG_MAX, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            v[i + 1] = v[i] + (str[i] == 'W');
        }
        for (int i = k; i <= n; i++)
        {
            ans = min(ans, (v[i] - v[i-k]));
        
        }
        cout << ans << endl;

    }

    return 0;
}