//
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
    Code By ImtiazDeepto

        string t,
        p;
    cin >> t >> p;
    int n = t.size(), m = p.size();
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i]--;
    }

    bool found = false;
    auto ok = [&](int del)
    {
        vector<bool> bad(n);
        for (int i = 0; i <= del; i++)
        {
            bad[a[i]] = true;
        }

        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (!bad[i] && t[i] == p[j])
            {
                j++;
            }
            if (j == m)
            {
                found = true;
                return true;
            }
        }
        return false;
    };

    int l = 0, r = n - 1, mid, ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << (found ? ans + 1 : ans) << '\n';

    return 0;
}