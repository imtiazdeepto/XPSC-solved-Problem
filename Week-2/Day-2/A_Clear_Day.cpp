//Practice contest
// Solved at:
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define int long long
const int N = 1e8;

signed main()
{

    Code By ImtiazDeepto

        int x,
        y;
    cin >> x >> y;
    int ans = x + y;
    if (ans < 7)
    {
        cout << 7 - ans << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}