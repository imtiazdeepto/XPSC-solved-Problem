// https://codeforces.com/problemset/problem/1612/B
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
        int n, a, b;
        cin >> n >> a >> b;
        int left_max = n / 2;
        int right_min = (n / 2) + 1;
        if (a > right_min or b < left_max)
            cout << -1 << endl;
        else if ((a == right_min and b != left_max) or (b == left_max and a != right_min))
            cout << -1 << endl;
        else
        {
            for (int i = right_min; i <= n; i++)
            {
                if (a == i or b == i)
                    continue;
                cout << i << " ";
            }
            cout << a << " ";
            cout << b << " ";
            for (int i = 1; i <= left_max; i++)
            {
                if (a == i or b == i)
                    continue;
                cout << i << " ";
            }
            cout<<endl;
        }
    }

    return 0;
}