//
// Solved at:
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define int long long
const int N = 1e9;

signed main()
{

    Code By ImtiazDeepto int n;
    cin >> n;
    map<int, int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[x]++;
    }
    int ans = 0;
    for (auto el : v)
    {
        ans = max(ans, el.second);
    }

    cout << ans << endl;

    return 0;
}