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
        string s2 = str;
        reverse(s2.begin(), s2.end());
        if (str <= s2)
        {
            if (!(x & 1))
            {

                cout << str << endl;
            }
            else
            {
                cout << str << s2 << endl;
            }
        }
        else
        {
            if ((x & 1))
            {
                cout << s2 << endl;
            }
            else
            {
                cout << s2 << str << endl;
            }
        }
    }

    return 0;
}