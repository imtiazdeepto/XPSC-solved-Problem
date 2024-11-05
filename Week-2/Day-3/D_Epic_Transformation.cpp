//https://codeforces.com/problemset/problem/1506/D
// Solved at: Nov/05/2024 19:36UTC+6
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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        priority_queue<int> pq;
        for (auto [x, y] : mp)
        {
            pq.push(y);
        }
        while (!pq.empty())
        {
            if(pq.size()<2)break;
            int x, y;
            x = pq.top();
            pq.pop();
            y = pq.top();
            pq.pop();
            x--; y--;
            if (x > 0)
                pq.push(x);
            if (y > 0)
                pq.push(y);
        }
        if (!pq.empty())
            cout << pq.top() << endl;
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}