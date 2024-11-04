// https://codeforces.com/problemset/problem/368/B
// Solved at:Nov/04/2024 21:13UTC+6
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

        int x,
        y;
    cin >> x >> y;
    int arr[x + 1];
    for (int i = 1; i <= x; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans(x + 1);
    set<int> s;

    for (int i = x; i >= 1; i--)
    {
        s.insert(arr[i]);
        ans[i] = s.size();
    }
    while (y--)
    {
        int m;
        cin >> m;
        cout << ans[m] << endl;
    }

    return 0;
}