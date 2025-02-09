/*
  In the name of Allah, The Most Gracious and The Most Merciful.
*/
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
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
        string s;
        cin >> s;
        int n = s.size();
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == s[i + 1])
            {
                cnt++;
                i++;
            }
        }
        if (cnt >= 1)
            cout << "1" << endl;
        else
            cout << n << endl;
    }

    return 0;
}