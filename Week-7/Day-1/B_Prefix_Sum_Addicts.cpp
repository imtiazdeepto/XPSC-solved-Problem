// https://codeforces.com/problemset/problem/1738/B
//
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

signed main()
{
    Code By ImtiazDeepto

        tc
    {
        int n, k;
        cin >> n >> k;
        vector<int> s(k);

        for (int i = 0; i < k; i++)
        {
            cin >> s[i];
        }

        if (k == 1)
        {
            cout << "Yes" << endl;
            continue;
        }

        vector<int> ans(n);
        int j = n - 1;

        for (int i = k - 1; i > 0; i--)
        {
            ans[j] = s[i] - s[i - 1];
            j--;
        }

        while (j >= 0)
        {
            ans[j] = ans[j + 1];
            s[0] -= ans[j];

            j--;
        }

        ans[0] += s[0];

        if (is_sorted(all(ans)))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
