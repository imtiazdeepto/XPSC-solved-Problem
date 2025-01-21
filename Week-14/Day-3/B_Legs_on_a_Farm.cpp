//
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
        int n;
        cin >> n;
        if (n == 2)
            cout << 1 << endl;
        else
        {
            if (n % 4 == 0)
                cout << n / 4 << endl;
            else
                cout << n / 4 + 1 << endl;
        }
    }

    return 0;
}