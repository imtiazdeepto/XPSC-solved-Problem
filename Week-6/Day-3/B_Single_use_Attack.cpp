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
        int h, a, s;
        cin >> h >> a >> s;
        h -= s;
        int ans = 1;
        while (h > 0)
        {
            h -= a;
            ans++;
        }
        cout << ans << endl;

    }

    return 0;
}