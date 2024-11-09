// https://codeforces.com/problemset/problem/1744/C
// Solved at:Nov/09/2024 23:22UTC+6
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define All(x) (x).begin(), (x).end()
#define int long long
const int N = 1e8;

signed main()
{

    Code By ImtiazDeepto

        int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char now;
        cin >> now;
        string str;
        cin >> str;
        if (now == 'g')
        {
            cout << 0 << endl;
            continue;
        }

        int g = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'g')
            {
                g = i;
                break;
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {

            if (str[i] == now)
            {
                int time = 0;
                bool ok = false;
                for (int j = i + 1; j < n; j++)
                {
                    time++;
                    if (str[j] == 'g')
                    {
                        ok = true;
                        break;
                    }
                }
                i += time;
                if (ok)
                {
                    ans = max(ans, time);
                }
                else
                {
                    ans = max(ans, (time + 1 + g));
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}