//https://codeforces.com/problemset/problem/1806/B
// Solved at: Nov/27/2024 00:08UTC+6
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
        int n, zero = 0, nonzero = 0;
        cin >> n;
        vector<int> v(n);
        int mx = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 0)
                zero++;
            else
                nonzero++;
            mx = max(mx, v[i]);
        }
        int nser = 0;
        if (nonzero >= zero - 1)
            nser = 0;
        else
        {
            if (mx == 1)
                nser = 2;
            else
                nser = 1;
        }
        cout << nser << endl;
    }

    return 0;
}