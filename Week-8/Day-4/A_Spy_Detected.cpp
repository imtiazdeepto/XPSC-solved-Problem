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
        vector<int> v(n);
        for (int &e : v)
        {
            cin >> e;
        }
        vector<int> a = v;
        sort(all(a));
        for (int i = 0; i < n; i++)
        {
            if (v[i] != a[1])
            {
                cout << i + 1 << endl;
            }
        }
    }

    return 0;
}