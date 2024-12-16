//https://codeforces.com/problemset/problem/805/B
// Solved at:Dec/16/2024 21:11UTC+6
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

        int n;
    cin >> n;
    int cnt = 0;
    string s = "aabb";
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        cout << s[k];
        if (k == 3)
        {
            k = 0;
        }
        else
            k++;
    }

    return 0;
}