//https://codeforces.com/problemset/problem/1974/A
// Solved at:Dec/03/2024 01:59UTC+6
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
        int one, two;
        cin >> one >> two;
        int ans = two / 2 + (two % 2);
        int ocpd = two * 4;
        int notocpd = (ans * 15) - ocpd;
        if (notocpd > one)
        {
            cout << ans << endl;
        }
        else
        {
            int more = one - notocpd;
            int ans2 = ceil(more / 15.0);
            cout << ans + ans2 << endl;
        }
    }

    return 0;
}