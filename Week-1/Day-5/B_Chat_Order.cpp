//https://codeforces.com/contest/637/problem/B
// Solved at:Oct/31/2024 20:48UTC+6
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

    int n;
    cin >> n;
    vector<string> s(n+1);
    map<string, bool> mp;


    for (int i = 0; i < n; i++)
        cin >> s[i];

    for (int i = n - 1; i >= 0; i--)
    {
        if (mp[s[i]] != true)
        {
            cout << s[i] << endl;
            mp[s[i]] = true;
        }
    }

    return 0;
}