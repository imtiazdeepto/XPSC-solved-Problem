// https://codeforces.com/problemset/problem/1256/A
// Solved at:Nov/17/2024 19:49UTC+6
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
        int a, b, n, s;
        cin >> a >> b >> n >> s;
        int nTaka = (a * n) + b;
        if (s%n<=b && nTaka >= s)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}