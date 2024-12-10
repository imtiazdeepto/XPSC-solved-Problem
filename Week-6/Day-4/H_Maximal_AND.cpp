//https://codeforces.com/problemset/problem/1669/H
// Solved at:Dec/10/2024 03:03UTC+6
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
        int n, op;
        cin >> n >> op;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        map<int, int> bits;

        for (int i = 0; i < n; i++)
        {
            for (int j = 30; j >= 0; j--)
            {
                if ((v[i] >> j) & 1)
                {
                    bits[j]++;
                }
            }
        }
        // for (auto el : bits)
        // {
        //     cout << el.first << "->" << el.second << endl;
        // }
        // cout << endl;
        int ans = 0;
        for (int l = 30; l >= 0; l--)
        {
            if (bits[l] == n)
            {
                ans += (1LL << l);
            }
            else
            {
                int need = n - bits[l];
                if (need <= op)
                {
                    ans += (1LL << l);
                    op -= need;
                }
               
            }
        }
        cout << ans << endl;
    }

    return 0;
}