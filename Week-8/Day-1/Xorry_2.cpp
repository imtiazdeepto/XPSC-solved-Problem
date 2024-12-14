//
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
        int x;
        cin >> x;
        int mxbit = __lg(x);
        int offbit = 0;
        int ok = 0;
        for (int i = mxbit - 1; i >= 0; i--)
        {
            if (x & (1 << i))
            {
                ok = 1;
            }
            if (ok and !(x & (1 << i)))
                offbit++;
        }
        cout << (1 << offbit) << endl;
    }

    return 0;
}