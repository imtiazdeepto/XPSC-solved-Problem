//https://www.codechef.com/problems/ASSIGNSCORE
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
        vector<int> v(n);
        int passing = ((n + 1) * 100) / 2;
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            total += v[i];
        }

        int minNeeded = passing - total;
        if (minNeeded > 100)
        {
            cout << -1 << endl;
        }
        else
        {
            if (minNeeded>0)
            {
                cout << minNeeded << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }

    return 0;
}