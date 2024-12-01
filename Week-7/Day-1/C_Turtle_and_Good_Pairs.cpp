//https://codeforces.com/contest/2003/problem/C
//Nov/30/2024 23:54UTC+6
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;

#define all(x) (x).rbegin(), (x).rend()
#define int long long
#define tc    \
    int x;    \
    cin >> x; \
    while (x--)

signed main()
{
    Code By ImtiazDeepto

        tc
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        map<char, int> mp;
        for (char ch : str)
        {
            mp[ch]++;
        }

        vector<pair<int, char>> v;
        for (auto [ch, cnt] : mp)
        {
            v.push_back({cnt, ch});
        }
        sort(all(v));
        string ans = "";
        for (auto [cnt, ch] : v)
        {
            while (cnt--)
            {
                ans += ch;
            }
        }
        // cout << ans << endl;
        string vv(n,' ');
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (j >= n )
                j = 1;
            vv[j] = ans[i];
            j += 2;
        }

        for (auto c : vv)
        {
            cout << c;
        }
        cout << endl;
    }

    return 0;
}