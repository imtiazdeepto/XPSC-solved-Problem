//https://codeforces.com/problemset/problem/1843/B
// Solved at:Nov/13/2024 22:37UTC+6
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
            cin >> v[i];
        int sum = 0;
        bool chk = false;
        int cnt = 0;
        for (int x : v)
        {
            sum += abs(x);
            if (x < 0 && !chk)
            {
                chk = true;
                cnt++;
            }
            if (x > 0)
            {
                chk = false;
            }
        }
        cout << sum << " " << cnt << endl;
    }
    return 0;
}