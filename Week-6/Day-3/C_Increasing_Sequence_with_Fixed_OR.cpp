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
        int mxbit = __lg(n);
        vector<int> v;
        for (int i = 0; i <= mxbit; i++)
        {
            if ((n >> i) & 1)
            {
                int val = (n - (1LL << i));
                if (val > 0)
                {
                    v.push_back(val);
                }
            }
        }
        v.push_back(n);
        sort(all(v));

        cout << v.size() << endl;
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}