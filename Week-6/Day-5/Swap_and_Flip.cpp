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
        string s, s2;
        cin >> s >> s2;
        int one2 = 0, one1 = 0;
        for (int i = 0; i < x; i++)
        {
            if (s[i] == '1')
                one1++;
            if (s2[i] == '1')
                one2++;
        }
        if (one2 % 2 == 0 and one1 % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else if (one2 % 2 == 1 and one1 % 2 == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}