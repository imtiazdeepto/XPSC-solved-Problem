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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        int sum = 0;
        int cursed = 0;
        int mx = v.back();

        for (int i = 0; i < n - 1; i++)
        {
            sum += v[i];
            if (sum >= v[i + 1] && sum >= mx)
            {
                cursed = n-i-1;
                break;
            }
            else
            {
                auto it = lower_bound(v.begin() + (i + 1), v.end() , sum + 1);
                int idx = it - v.begin();
                swap(v[i+1], v[idx]);
            }
        }

        cout << cursed << endl;
        for (auto el : v)
        {
            cout << el << " ";
        }
        cout << endl;
    }

    return 0;
}