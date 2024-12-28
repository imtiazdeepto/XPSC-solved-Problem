//
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
        int x;
        cin >> x;
        string str;
        cin >> str;
        map<char, int> mp;
        int ans = 0;
        for (int i = 0; i < str.size(); i++)
            mp[str[i]]++;
        for (int i = 0; i < mp.size(); i++)
        {
            if (mp['A'] >= x)
                ans += x;
            else if (mp['A'] < x)
                ans += mp['A'];
            if (mp['B'] >= x)
                ans += x;
            else if (mp['B'] < x)
                ans += mp['B'];
            if (mp['C'] >= x)
                ans += x;
            else if (mp['C'] < x)
                ans += mp['C'];
            if (mp['D'] >= x)
                ans += x;
            else if (mp['D'] < x)
                ans += mp['D'];
            if (mp['?'])
                ans += 0;
        }
        cout << ans/5 << endl;
    }

    return 0;
}