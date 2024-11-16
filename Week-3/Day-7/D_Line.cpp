// https://codeforces.com/problemset/problem/1722/D
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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int tot = 0;
        vector<int> v(n);
        vector<int> changes;
        for (int i = 0; i < n; i++)
        {
            int Left = i;
            int Right = n - 1 - i;
            if (s[i] == 'L')
            {
                if (Right > Left)
                {
                    tot += Right;
                    changes.push_back(Right - Left);
                }
                else
                {
                    tot += Left;
                }
            }
            else
            {
                if (Right < Left)
                {
                    tot += Left;
                    changes.push_back(Left - Right);
                }
                else
                {
                    tot += Right;
                }
            }
        }
        int minchange = 0;
        if (changes.size() != 0)
            minchange = changes.size() - 1;
        for (int i = minchange; i < n; i++)
        {
            v[i] = tot;
        }
        sort(changes.begin(), changes.end(), greater<int>());

        for (int i = minchange; i > 0; i--)
        {
            v[i - 1] = v[i] - changes.back();
            changes.pop_back();
        }
        for (auto el : v)
        {
            cout << el << " ";
        }
        cout << endl;
    }

    return 0;
}