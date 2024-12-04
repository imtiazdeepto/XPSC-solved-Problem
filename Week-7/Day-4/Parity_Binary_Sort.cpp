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
        vector<int> even;
        vector<int> odd;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (__popcount(x) % 2 == 0)
            {
                even.push_back(x);
            }
            else
            {
                odd.push_back(x);
            }
        }
        sort(all(even));
        sort(all(odd));
        for (auto x : even)
        {
            cout << x << " ";
        }
        for (auto x : odd)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}