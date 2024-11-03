//https://codeforces.com/problemset/problem/1883/B
// Solved at:Nov/02/2024 20:18UTC+6
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

        int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        int k;
        cin >> k;
        string str;
        cin >> str;
        map<char, int> mp;
        for (int i = 0; i < n; i++)
            mp[str[i]]++;
        int odd = 0;
        for (auto i : mp)
            if (i.second % 2 != 0)
                odd++;
        odd--;
        if (odd > k)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}