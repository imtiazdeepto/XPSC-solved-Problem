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
        m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    int i = 0, j = 0;
    int ans = 0;
    while (j < m and i < n)
    {
        int cntA = 0, cntB = 0;
        int temp = a[i];
        while (i < n && a[i] == temp)
        {
            i++;
            cntA++;
        }
        while (j < m && temp > b[j])
        {
            j++;
        }
        while (j < m && temp == b[j])
        {
            j++;
            cntB++;
        }
        ans += cntA * cntB;
    }
    cout << ans << endl;
    return 0;
}