// https://codeforces.com/problemset/problem/1922/A
// Solved at: Nov/26/2024 23:11UTC+6
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
        int l;
        cin >> l;
        string a, b, c;
        cin >> a >> b >> c;
        bool ok = false;
        for (int i = 0; i < l; i++)
        {
            if (a[i] != c[i] and b[i] != c[i])
            {
                ok = false;
                break;
            }
            else
            {
                ok = true;
            }
        }
        if (!ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}