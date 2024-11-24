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
        vector<int> v(n + 1);
        vector<int> presum(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            presum[i] = presum[i - 1] + v[i];
        }
        string s;
        cin >> s;
        s = " " + s;
        int ans = 0, l = 1, r = n;
        while (l <= r)
        {
            if (s[l] == 'L' and s[r] == 'R')
            {
                ans += presum[r] - presum[l - 1];
                l++;
                r--;
            }
            else if (s[l] == 'R')
                l++;
            else if (s[r] == 'L')
                r--;
        }
        cout << ans << endl;
    }

    return 0;
}