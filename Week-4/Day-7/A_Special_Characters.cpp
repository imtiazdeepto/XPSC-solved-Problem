//https://codeforces.com/problemset/problem/1948/A
// Solved at:Nov/23/2024 21:15UTC+6
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

        if (n % 2 == 1)
        {
            cout << "NO" << '\n';
            continue;
        }

        cout << "YES" << '\n';

        for (int i = 0; i < n / 2; ++i)
        {
            for (int j = 0; j < 2; ++j)
            {
                if (i % 2 == 0)
                    cout << "A";
                else
                    cout << "B";
            }
        }
        cout << endl;
    }

    return 0;
}