// https://codeforces.com/problemset/problem/1729/A
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

        int a, b, c;
        cin >> a >> b >> c;
        int x, y;
        x = a - 1;
        y = abs(b - c) + c - 1;

        if (x < y)
            cout << 1 << endl;
        else if (x > y)
            cout << 2 << endl;
        else if (x == y)
            cout << 3 << endl;
    }

    return 0;
}