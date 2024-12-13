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
        int msb = 0, a = 0, b = 0;
        while ((1 << msb) <= x)
        {
            msb++;
        }
        a = 1 << (msb - 1);
        b = a ^ x;
        cout << b << " " << a << endl;
    }

    return 0;
}