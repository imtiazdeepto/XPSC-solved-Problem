//https://www.codechef.com/problems/CHOLY
// Solved at: 05:57 PM 10-NOV-2024
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

        double w,
        d, l;
    cin >> w >> d >> l;
    double total = w + d + l;
    double reamin = 4 - total;
    if (total == 4)
    {
        double me, you;
        me = w + (d / 2.0);
        you = l + (d / 2.0);
        if (me > you)
            cout << "Yes";
        else if (me <= you)
            cout << "No";
    }
    else
    {
        if (reamin >l+(d/2.0))
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }
    return 0;
}