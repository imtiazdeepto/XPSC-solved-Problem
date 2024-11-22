// https://codeforces.com/problemset/problem/1791/G1
// Solved at:Nov/22/2024 23:00UTC+6
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
        int n, cost;
        cin >> n >> cost;
        priority_queue<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push(-x - (i + 1));
        }

        int ans = 0;
        while (!v.empty())
        {
            int s = -v.top();

            // cout << "C " << s << endl;
            if (s <= cost)
            {
                ans++;
                cost -= s;
                v.pop();
            }
            else
            {
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}