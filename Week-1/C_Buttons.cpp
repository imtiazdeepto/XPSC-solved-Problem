//
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
    int ans = 0, a, b;
    a = x + (x - 1);
    b = y + (y - 1);
    int z = x + y;
    ans = max(a, max(b, z));
    cout << ans << endl;

    return 0;
}