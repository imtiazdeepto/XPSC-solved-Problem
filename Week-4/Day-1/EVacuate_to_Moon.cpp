// https://www.codechef.com/practice/course/greedy-algorithms/INTGRA01/problems/MOONSOON
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
        int n;

        int p, t;
        cin >> n >> p >> t;
        vector<int> v(n);
        vector<int> v2(p);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0; i < p; i++)
            cin >> v2[i];
        sort(all(v), greater<int>());
        sort(all(v2), greater<int>());

        int sum = 0;
        for (int i = 0; i < min(n, p); i++)
        {
            sum += min((v2[i] * t), v[i]);
        }
        cout << sum << endl;
    }

    return 0;
}