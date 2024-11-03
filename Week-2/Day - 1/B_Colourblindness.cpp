//https://codeforces.com/problemset/problem/1722/B
// Solved at:Nov/02/2024 20:31UTC+6
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
        int n, r = 2;
        cin >> n;
        string str, str2;
        cin >> str >> str2;

        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if ((str[i] == 'R' and str2[i] == 'R') or (str[i] == 'B' and str2[i] == 'B') or (str[i] == 'G' and str2[i] == 'G') or (str[i] == 'B' and str2[i] == 'G') or (str[i] == 'G' and str2[i] == 'B'))
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}