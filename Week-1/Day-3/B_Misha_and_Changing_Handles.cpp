//https://codeforces.com/problemset/problem/501/B
// Solved at:Oct/29/2024 01:23UTC+6
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
    map<string, string> mp;
    map<string, string> temp_mp;

    for (int i = 1; i <= n; i++)
    {
        string a, b;
        cin >> a >> b;
        if (temp_mp.find(a) != temp_mp.end())
        {
            string st = temp_mp[a];

            mp[st] = b;
            temp_mp.erase(a);
            temp_mp[b] = st;
        }
        else
        {
            mp[a] = b;
            temp_mp[b] = a;
        }
    }
    cout << mp.size() << endl;
    for (auto [old, New] : mp)
    {
        cout << old << " " << New << endl;
    }

    return 0;
}