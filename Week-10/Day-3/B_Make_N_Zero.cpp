//
// Solved at:
#include <bits/stdc++.h>
#include <iostream>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define tc    \
    int x;    \
    cin >> x; \
    while (x--)
#define all(x) (x).begin(), (x).end()
#define int long long
signed main()
{
    Code By ImtiazDeepto

        tc
    {
        int n;
        cin >> n;
        if (n == 3 or n == 4 or n == 0 or n >= 6)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}