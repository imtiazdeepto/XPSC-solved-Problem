//
// Solved at:
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define int long long
const int N = 1e8;

signed main()
{

    Code By ImtiazDeepto

        int a,
        b, c;
    cin >> a >> b >> c;
    int i = 1;
    while (c <= b)
    {
        c = c * i;
        if (c >= a and c <= b)
        {
            cout << c << endl;
            return 0;
        }
        i++;
    }
    cout << -1 << endl;

    return 0;
}