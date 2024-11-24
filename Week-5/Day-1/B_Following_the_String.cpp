//https://codeforces.com/problemset/problem/1927/B
// Solved at: Nov/24/2024 23:53UTC+6
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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> cnt(26, 0);
        string s = "";

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                if (cnt[j] == a[i])
                {
                    cnt[j]++;
                    s += (char)('a' + j);
                    break;
                }
            }
        }

        cout << s << endl;
    }

    return 0;
}