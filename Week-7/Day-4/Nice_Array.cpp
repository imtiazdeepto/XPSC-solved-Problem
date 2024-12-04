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

        tc
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        vector<int> flr(n);
        vector<int> cl(n);
        int sumFLR = 0;
        int sumCL = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            {
                flr[i] = floor(v[i] * 1.0 / k);
                cl[i] = ceil(v[i] * 1.0 / k);
                sumFLR += flr[i];
                sumCL += cl[i];
            }
        }
        if (sumCL == 0)
            cout << "YES" << endl;
        else if (sumFLR == 0)
            cout << "YES" << endl;

        else if (sumCL >= 0 and sumFLR <= 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}