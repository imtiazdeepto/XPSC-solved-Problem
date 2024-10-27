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
    int ans=0;
    if (x > y)
    {
        ans = 0;
    }
    else
    {
        ans = y - x + 1;
    }
    cout << ans << endl;

    return 0;
}