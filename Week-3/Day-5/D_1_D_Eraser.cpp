// https://codeforces.com/contest/1873/problem/D
// Solved at: Nov/14/2024 02:39UTC+6
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
        int s, k;
        cin >> s >> k;
        string str;
        cin >> str;
        int cnt = 0, r = 0;
        while (r < s)
        {
            if (str[r] == 'B')
            {
                cnt++;
                r += k;
            }
            else
                r++;
        }
        cout << cnt <<endl;
    }

    return 0;
}