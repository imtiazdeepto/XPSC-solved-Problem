// https://www.codechef.com/START160D/problems/MOVPR
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

        int a,
        b, c;
    cin >> a >> b >> c;

    int ans1 = (2 * a) + (3 * b);
    int ans2 = 3 * c;
    int ans3 = 2 * c + b;
    int mn = min(ans1, min(ans3, ans2));
    cout << mn << endl;

    return 0;
}