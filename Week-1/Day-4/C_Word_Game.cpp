//https://codeforces.com/problemset/problem/1722/C
// Solved at:Oct/30/2024 18:07UTC+6
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

        int test;
    cin >> test;
    while (test--)
    {
        int n, m = 3;
        cin >> n;
        map<string, vector<int>> mp;
        for (int i = 1; i <= m; i++)

        {
            for (int j = 1; j <= n; j++)
            {
                string str;
                cin >> str;
                mp[str].push_back(i);
            }
        }
        // int first = 0, sec = 0, third = 0;
        // for (auto [str, num] : mp)
        // {
        //     cout << str << " ->";
        //     for (auto val : num)
        //     {
        //         cout << val << " ";
        //     }
        //     cout << endl;
        // }
        vector<int> man(m + 1, 0);
        for (auto [str, vec] : mp)
        {
            vector<int> v = vec;
            if (v.size() == 1)
            {
                man[v[0]] += 3;
            }
            if (v.size() == 2)
            {
                man[v[0]]++;
                man[v[1]]++;
            }
        }
        for (int i = 1; i <= 3; i++)
        {
            cout << man[i] << " ";
        }
        cout << endl;
    }

    return 0;
}