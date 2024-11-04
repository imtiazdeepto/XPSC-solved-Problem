//https://codeforces.com/problemset/problem/1165/B
// Solved at:Nov/04/2024 23:38UTC+6
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
    multiset<int> v;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        v.insert(x);
    }
    int cnt = 0;
    for (int i = 1; !v.empty(); i++)
    {
        auto it = v.lower_bound(i);
        if (it != v.end())
        {
            cnt++;
            v.erase(it);
        }
        else
        {
            break;
        }
    }
    cout << cnt << endl;
    return 0;
}