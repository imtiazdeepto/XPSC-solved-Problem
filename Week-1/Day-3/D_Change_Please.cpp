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

    Code By ImtiazDeepto int t;
    cin >> t;
    while (t--)
    {
        int owe;
        cin >> owe;
        if (owe >= 100)
            cout << 0 << endl;
        else if (owe < 100)
        {
            int ans = 100 - owe;
            int rem = ans % 10;
            ans = ans - rem;
            cout << ans << endl;
        }
    }

    return 0;
}