//https://codeforces.com/problemset/problem/845/C
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

        map<int, int>
            mp;
    bool found = false;
    tc
    {
        int l, r;
        cin >> l >> r;
        mp[l - 1]++, mp[r]--;
        // if(mp[r]>2)found=true;
    }
    int sum = 0;
    for (auto [x, y] : mp)
    {
        sum += y;
        if (sum > 2)
        {
            found = true;
            break;
        }
    }
    if (found)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}