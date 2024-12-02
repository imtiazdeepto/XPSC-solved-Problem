//
// Solved at:
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define all(x) (x).rbegin(), (x).rend()
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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(all(v));
        if (v[0] == k)
        {
            cout << 0 << endl;
        }
        else
        {
            int sum = 0, done = 0;
            for (int i = 0; i < n; i++)
            {
                sum += v[i];
                if (sum == k)
                {
                    cout << 0 << endl;
                    done = 1;

                    break;
                }
                if (sum > k)
                {
                    sum -= v[i];
                    cout << k - sum << endl;
                    done = 1;

                    break;
                }
            }
            if (done == 0)
            {
                cout << k - sum << endl;
            }
        }
    }

    return 0;
}