// https://codeforces.com/problemset/problem/1692/E
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
        int n, k;
        cin >> n >> k;
        deque<int> v(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        if (sum == k)
        {
            cout << 0 << endl;
        }
        else if (sum < k)
        {
            cout << -1 << endl;
        }

        else
        {
            int sum = 0, l = 0, r = 0, mxlen = INT_MIN;

            while (r < n)
            {
                sum += v[r];

                while (sum > k && l <= r)
                {
                    sum -= v[l];
                    l++;
                }
                if (sum <= k)
                {
                    mxlen = max(mxlen, r - l + 1);
                }
                r++;
            }
            cout <<n-mxlen << endl;
        }
    }
        return 0;
    }