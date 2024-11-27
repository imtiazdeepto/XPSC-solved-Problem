//https://codeforces.com/problemset/problem/1747/B  
// Solved at:Nov/27/2024 23:57UTC+6
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
        int n;
        cin >> n;
        cout << n / 2 + n % 2 << endl;
        int l = 1, r = 3 * n;
        while (l < r)
        {
            cout << l << " " << r << endl;
            l += 3;
            r -= 3;
        }
    }

    return 0;
}