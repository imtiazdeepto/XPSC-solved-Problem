//https://www.codechef.com/problems/GCEA
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

        tc
    {
        int n, x, mx;
        cin >> n >> x >> mx;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if ((x * v[i]) > mx)
            {
                sum += mx;
            }
            else
            {
                sum += (v[i] * x);
            }
        }
        cout << sum << endl;
    }

    return 0;
}