//
// Solved at:
#include <bits/stdc++.h>
#include <iostream>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define tc    \
    int x;    \
    cin >> x; \
    while (x--)
#define all(x) (x).rbegin(), (x).rend()
#define int long long
int binary_search(vector<int> &v, int x)
{
    int start = 0, end = v.size() - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (v[mid] >= x)
        {
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return ans;
}
signed main()
{
    Code By ImtiazDeepto

        tc
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        sort(all(v));
        vector<int> prefix_sum(n + 1);
        prefix_sum[0] = 0;
        for (int i = 1; i <= n; i++)
            prefix_sum[i] = prefix_sum[i - 1] + v[i - 1];

        while (k--)
        {
            int t;
            cin >> t;
            int ans = binary_search(prefix_sum, t);

            cout << ans << endl;
        }
    }

    return 0;
}