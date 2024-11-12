// https://codeforces.com/problemset/problem/1791/C
// Solved at: Nov/12/2024 03:03UTC+6
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
        string str;
        cin >> str;
        int s = str.size();
        int start = 0, end = 0;
        for (int i = 0, j = s - 1; i < s; i++, j--)
        {
            if (str[i] == str[j])
            {
                start = i;
                end = j + 1;
                break;
            }
        }
        cout << end - start << endl;
    }
    return 0;
}