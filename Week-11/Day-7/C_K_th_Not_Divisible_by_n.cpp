// https://codeforces.com/problemset/problem/1352/C
#include <bits/stdc++.h>
#include <iostream>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define tc    \
    int x;    \
    cin >> x; \
    while (x--)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define all(x) (x).begin(), (x).end()
#define int long long
signed main()
{
    Code By ImtiazDeepto tc
    {
        int n, k;
        cin >> n >> k;
        int l = 0, r = 2e9, mid = 0, ans = 0;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (mid - (mid / n) >= k)
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}