//https://codeforces.com/problemset/problem/1800/C1
// Solved at:Nov/07/2024 01:29UTC+6
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define int long long
const int N = 1e8;

signed main()
{

    Code By ImtiazDeepto

        int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        priority_queue<int> pq;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                if (!pq.empty())
                {
                    int u = pq.top();
                    ans += u;
                    pq.pop();
                }
            }
            else
            {
                pq.push(x);
            }
        }
        cout << ans << endl;
    }

    return 0;
}