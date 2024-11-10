// https://www.codechef.com/problems/CARDGAME1
// Solved at: 04:08 pm 10 Nov 2024
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define All(x) (x).begin(), (x).end()
#define int long long
const int N = 1e8;

signed main()
{

    Code By ImtiazDeepto

        int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int e;
        if (x % 2 == 0)
        {
            e = n / 2;
            e--;
        }
        else
        {
            if (n % 2 == 1)
            {
                e = (n / 2) + 1;
            }
            else
            {
                e = n / 2;
            }
            e--;
        }

        cout << e << endl;
    }

    return 0;
}