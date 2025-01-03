// https://codeforces.com/contest/706/problem/B
#include <bits/stdc++.h>
#include <iostream>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define tc    \
    int x;    \
    cin >> x; \
    while (x--)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define all(x) (x).begin(), (x).end()
#define int long long

int binary_search(vector<int> &v, int x)
{
    int start = 0, end = v.size() - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (v[mid] <= x)
        {
            ans = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    return ans;
}
signed main()
{
    Code By ImtiazDeepto

        int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    sort(all(a));
    tc
    {
        int k;
        cin >> k;
        int ans = binary_search(a, k);
        if (ans == -1)
            cout << 0 << endl;
        else
            cout << ans + 1 << endl;
    }

    return 0;
}