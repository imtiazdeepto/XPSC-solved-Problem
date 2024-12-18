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

void test(int n, int m, int k)
{

    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int ans = 2 * (i + j);
            if (ans > k and i==1 and j==1)
            {
                cout << abs(ans - k) << endl;
                return;
            }
            if (ans > k)
                break;
            v.push_back(ans);
        }
    }
    cout << abs(v.back() - k) << endl;
}

signed main()
{
    Code By ImtiazDeepto

        tc
    {
        int n, m, k;
        cin >> n >> m >> k;

        test(n, m, k);
    }

    return 0;
}