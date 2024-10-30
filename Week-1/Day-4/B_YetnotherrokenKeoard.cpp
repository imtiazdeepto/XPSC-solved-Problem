//https://codeforces.com/problemset/problem/1907/B
// Solved at: Oct/30/2024 19:08UTC+6
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

        int t;
    cin >> t;

    while (t--)
    {
        string str, str2;
        cin >> str;
        int sb = 0, bb = 0;
        int i = str.length() - 1;
        for (int i = str.length() - 1; i >= 0; i--)
        {
            if (str[i] == 'b')
                sb++;
            else if (str[i] == 'B')
                bb++;
            else
            {
                // cout<<sb<<" "<<bb<<endl;
                if (sb && islower(str[i]))
                {
                    // i--;
                    sb--;
                }
                else if (bb && isupper(str[i]))
                {
                    // i--;
                    bb--;
                }
                else
                {
                    str2 += str[i];
                }
            }
        }
        reverse(str2.begin(), str2.end());
        cout << str2 << endl;
    }

    return 0;
}