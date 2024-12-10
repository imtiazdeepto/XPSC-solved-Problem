// https://codeforces.com/problemset/problem/1994/B
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
        string s, t;
        cin >> s >> t;
        if (s == t)
        {
            cout << "YES" << endl;
            continue;
        }
        int one = -1;
        for (int i = 0; i < x; i++)
        {
            if (s[i] == '1')
            {
                one = i;
                break;
            }
        }
        if (one != -1)
        {
            bool b = true;
            for (int i = 0; i < x; i++)
            {

                if (s[i] != t[i])
                {
                    if (one > i)
                    {
                        b = false;
                        break;
                    }
                }
            }
            if (b)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}