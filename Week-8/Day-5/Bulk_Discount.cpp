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
        int ans = v[0];
        int minus = 1;
        for (int i = 1; i < n; i++)
        {
            // cout << "->"<<v[i] <<endl;
            // cout << "-" << (v[i] - minus) << endl;
            if ((v[i] - minus) >= 0)
                ans += (v[i] - minus);
            minus++;
        }
        cout << ans << endl;
    }

    return 0;
}