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
        m, k;
    cin >> n >> m >> k;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
        cin >> v[i];
    int me;
    cin >> me;
    int frnd = 0;
    for (int i = 0; i < m; i++)
    {
        int ans = me ^ v[i];
        if (__popcount(ans) <= k)
        {
            frnd++;
        };
    }
    cout << frnd << endl;

    return 0;
}