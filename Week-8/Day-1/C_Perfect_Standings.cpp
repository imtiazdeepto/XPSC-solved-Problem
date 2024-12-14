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

set<string> s;

void seq(string str)
{
    int n = str.length();
    int total = 1 << n;

    for (int i = 0; i < total; ++i)
    {
        string sub;
        for (int j = 0; j < n; ++j)
        {
            if (i & (1 << j))
            {
                sub += str[j];
            }
        }
        if (!sub.empty())
        {
            s.insert(sub);
        }
    }
}

signed main()
{
    Code By ImtiazDeepto

        seq("ABCDE");

    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    vector<pair<int, string>> str;

    for (auto el : s)
    {
        int val = 0;
        for (char ch : el)
        {
            if (ch == 'A')
                val += a;
            if (ch == 'B')
                val += b;
            if (ch == 'C')
                val += c;
            if (ch == 'D')
                val += d;
            if (ch == 'E')
                val += e;
        }
        str.push_back({val, el});
    }

    sort(str.begin(), str.end(), [](auto a, auto b)
         {
        if (a.first == b.first) {
            return a.second < b.second;
        }
        return a.first > b.first; });

    for (auto el : str)
    {
        cout << el.second << endl;
    }

    return 0;
}