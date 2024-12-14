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

        // Div. 1  between 1600 and 2799, inclusive,
        // Div. 2,  between 1200 and 2399, inclusive,
        int t,
        start;
    cin >> t >> start;

    while (t--)
    {
        int div, rate;
        cin >> div >> rate;
        if (start > 2799)
            break;
        if (div == 2 and start >= 1200 and start <= 2399)
            start += rate;
        if (div == 1 and start >= 1600 and start <= 2799)
            start += rate;
    }
    cout << start << endl;

    return 0;
}