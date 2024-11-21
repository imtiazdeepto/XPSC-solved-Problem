// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F
// Solved at:Nov/20/2024 19:45UTC+6
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

    Code By ImtiazDeepto int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < N; i++)
        cin >> v[i];
    int l = 0, r = 0, ans = 0;
    multiset<int> ms;
    while (r < n)
    {
        ms.insert(v[r]);
        int mn = *ms.begin(), mx = *ms.rbegin();
        while ((mx - mn) > k)
        {
            ms.erase(ms.find(v[l]));
            mn = *ms.begin(), mx = *ms.rbegin();
            l++;
        }
        ans += r - l + 1;
        r++;
    }
    cout << ans << endl;

    return 0;
}