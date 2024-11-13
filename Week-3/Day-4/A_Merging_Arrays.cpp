// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A
// Solved at:Nov/13/2024 03:41UTC+6
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
        m;
    cin >> n >> m;
    vector<int> v(n);
    vector<int> vv(m);
    vector<int> ans;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < m; i++)
        cin >> vv[i];

    int l = 0, r = 0;
    while (l < n && r < m)
    {
        if (v[l] <= vv[r])
        {
            ans.push_back(v[l]);
            l++;
        }
        else
        {
            ans.push_back(vv[r]);
            r++;
        }
    }
    while (l < n)
    {
        ans.push_back(v[l]);
        l++;
    }
    while (r < m)
    {
        ans.push_back(vv[r]);
        r++;
    }
    for (auto el : ans)
        cout << el << " ";

    return 0;
}