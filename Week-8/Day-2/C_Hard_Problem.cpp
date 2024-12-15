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

signed main()
{

    Code By ImtiazDeepto

        tc
    {
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int tot = m * 2;
        int row1 = m;
        int row2 = m;
        int ans = 0;
        if (a == m and b == m and c == 0)
        {
            cout << m << endl;
        }
        else
        {
            if (a > m)
            {
                ans += m;
                a -= m;
                row1 -= m;
            }
            else
            {
                ans += a;
                row1 -= a;
            }
            if (b > m)
            {
                ans += m;
                b -= m;
                row2 -= m;
            }
            else
            {
                ans += b;
                row2 -= b;
            }
            if (c > row1)
            {
                ans += row1;
                c -= row1;
            }
            else
            {
                ans += c;
                row1 -= c;
                c = 0;
            }
            if (c > row2)
            {
                ans += row2;
                c -= row2;
            }
            else
            {
                ans += c;
                row2 -= c;
                c = 0;
            }

            cout << ans << endl;
        }
    }

    return 0;
}