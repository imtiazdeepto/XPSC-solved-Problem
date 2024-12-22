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
        int t, a, b, c;
        cin >> t >> a >> b >> c;
        int ans = a + b + c;
        int result = (t / ans) * 3;
        int res = t % ans;
        int cnt = 1;
        while (res > 0)
        {
            if (cnt == 1)
            {
                res -= a;
                result++;
                cnt++;
            }
            else if (cnt == 2)
            {
                res -= b;
                result++;
                cnt++;
            }
            else if (cnt == 3)
            {
                res -= c;
                result++;

                cnt = 1;
            }
        }
        cout << result << endl;
    }

    return 0;
}