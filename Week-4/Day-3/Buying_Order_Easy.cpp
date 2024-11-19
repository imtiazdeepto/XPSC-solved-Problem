// https://www.codechef.com/problems/BUYORDEREZ
// Solved at: 19 Nov 2024 3:35PM
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
        int o = 0, z = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (i == 0 and x == 0)
                o++;
            if (x == 1 and i == n - 1)
                z++;
        }
        if (o and z)
            cout << (2 * n - 2) << endl;
        else
            cout << 2 * n - 1 << endl;
    }

    return 0;
}