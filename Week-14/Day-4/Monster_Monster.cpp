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

    Code By ImtiazDeepto tc
    {
        int n, h;
        cin >> n >> h;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(all(v));
        int pow = 0;
        int mx = v[n - 1];
        int l = 1;
        for (int i = n - 2; i >= 0; i--)
        {
            pow = v[i] + (l * h);
            l++;
            mx = max(mx, pow);
        }
        cout << mx << endl;
    }

    return 0;
}