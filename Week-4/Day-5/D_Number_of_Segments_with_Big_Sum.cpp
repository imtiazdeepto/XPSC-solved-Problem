//https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/D
// Solved at: Nov/21/2024 14:03UTC+6
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
        y;
    cin >> n >> y;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int l = 0, r = 0, ans = 0, sum = 0;
    while (r < n)
    {
        sum += v[r];
        while (sum >= y)
        {
            ans += n - r;
            sum -= v[l];
            l++;
        }
        r++;
    }
    cout << ans << endl;

    return 0;
}