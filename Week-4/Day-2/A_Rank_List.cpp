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

        int n,
        k;
    cin >> n >> k;
    priority_queue<pair<int, int>> pq;

    while (n--)

    {
        int x, y;
        cin >> x >> y;
        pq.push({x, -y});
    }

    vector<pair<int, int>> v;
    while (!pq.empty())
    {
        v.push_back(pq.top());
        pq.pop();
    }
    map<pair<int, int>, int> mp;
    for (auto el : v)
    {
        mp[el]++;
    }
    cout << mp[v[k - 1]];

    return 0;
}