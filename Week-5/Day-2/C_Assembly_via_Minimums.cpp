//https://www.codechef.com/problems/ADVITIYA3
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
        cin >> n;
        long long p = static_cast<long long>(n) * (n - 1) / 2;
        vector<int> a(p);
        for (int i = 0; i < p; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        for (int i = 0; i < p; i += --n)
        {
            cout << a[i] << " ";
        }
        cout << a[p - 1] << endl;
    }

    return 0;
}