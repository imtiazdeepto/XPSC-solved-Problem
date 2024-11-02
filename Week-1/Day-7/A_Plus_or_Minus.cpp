//https://codeforces.com/problemset/problem/1807/A
// Solved at:Nov/02/2024 20:13UTC+6
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

        int n;
    cin >> n;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (c == a + b)
        {
            cout << "+" << endl;
        }
        else if (c == a - b)
        {
            cout << "-" << endl;
        }
    }

    return 0;
}