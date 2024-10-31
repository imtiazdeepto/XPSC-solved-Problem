//https://codeforces.com/contest/855/problem/A
// Solved at:Oct/31/2024 21:11UTC+6
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
    map<string, bool> mp;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (mp[s] == false)
        {
            cout << "NO" << endl;
            mp[s] = true;
        }
        else
            cout << "YES" << endl;
    }

    return 0;
}