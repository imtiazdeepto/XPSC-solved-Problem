//https://www.codechef.com/problems/FOOTBALLTIES
// Solved at: 17 nov 2024 6:58 pm
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
        int a, b;
        cin >> a >> b;
        if (a % 3 == 0)
            cout << 0 << endl;
        else
            cout << a % 3 << endl;
    }

    return 0;
}