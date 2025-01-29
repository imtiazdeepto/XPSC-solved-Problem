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
        string s, s2 = "ADVITIYA";
        cin >> s;
        int ans = 0;
        if (s == s2)
            cout << 0 << endl;
        else
        {
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] != s2[i])
                {
                    if (s[i] < s2[i])
                    {
                        ans += (abs(s2[i] - s[i]));
                    }else{
                        ans += 26-(abs(s2[i] - s[i]));

                    }
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}