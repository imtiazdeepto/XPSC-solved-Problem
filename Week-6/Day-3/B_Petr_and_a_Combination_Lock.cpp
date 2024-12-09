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

        int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    bool ok = false;

    for (int i = 0; i < (1 << n); i++)
    {
        int sum = 0;
        for (int j = n - 1; j >= 0; j--)
        {
            if ((i >> j) & 1)
            {
                sum += v[j];
            }
            else
            {
                sum -= v[j];
            }
        }
        if (abs(sum) % 360 == 0)
        {
            ok = true;
            break;
        }
    }
    if (ok)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}