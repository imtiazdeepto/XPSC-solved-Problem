// https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0, r = 0;
    vector<int> ans;
    queue<int> q;
    while (r < n)
    {
        if (a[r] < 0)
        {
            q.push(a[r]);
        }
        if (r - l + 1 == k)
        {
            if (!q.empty())
            {
                ans.push_back(q.front());
                if (a[l] == q.front())
                    q.pop();
            }
            else
            {
                ans.push_back(0);
            }
            l++;
        }
        r++;
    }
    for (auto el : ans)
        cout << el << " ";

    return 0;
}