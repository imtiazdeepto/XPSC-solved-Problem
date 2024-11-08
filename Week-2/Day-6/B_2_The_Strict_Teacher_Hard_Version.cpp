//https://codeforces.com/problemset/problem/2005/B2
// Solved at:Nov/08/2024 23:43UTC+6
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define All(x) (x).begin(), (x).end()
#define int long long
const int N = 1e8;

signed main()
{

    Code By ImtiazDeepto

        int t;
    cin >> t;
    while (t--)
    {
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> tPos(m);
        for (int i = 0; i < m; i++)
            cin >> tPos[i];
        sort(All(tPos));

        for (int i = 0; i < q; i++)
        {
            int david;
            cin >> david;
            int up = upper_bound(tPos.begin(), tPos.end(), david) - tPos.begin();

            if (up == 0)
                cout << tPos[0] - 1<< endl;
            else if (up == m)
                cout << n - tPos.back() << endl;
            else
            {
                cout << (tPos[up] - tPos[up - 1]) / 2 << endl;
            }
        }
    }
    return 0;
}