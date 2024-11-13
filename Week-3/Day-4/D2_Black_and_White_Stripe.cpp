// https://codeforces.com/problemset/problem/1690/D
// Solved at:Nov/13/2024 03:15UTC+6
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
        //Two pointers approch
        int r = 0, l = 0, ans = LONG_LONG_MAX, cnt = 0;
        for (r = 0; r < k; r++)
        {
            if (str[r] == 'W')
                cnt++;
        }
        ans = min(ans, cnt);
        while (r < n)
        {
            if (str[r] == 'W')
                cnt++;
            if (str[l] == 'W')
                cnt--;
            ans = min(ans, cnt);

            r++;
            l++;
        }
        cout << ans << endl;
    }

    return 0;
}