//https://codeforces.com/contest/918/problem/B
// Solved at:Oct/31/2024 19:57UTC+6
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define int long long
const int N = 1e8;

signed main()
{

    Code By ImtiazDeepto int n, m;
    cin >> n >> m;
    map<string, string> mp;

    for (int i = 0; i < n; i++)
    {
        string name, ip;
        cin >> name >> ip;
        mp[ip] = name;
    }

    for (int i = 0; i < m; i++)
    {
        string command, ip;
        cin >> command >> ip;
        ip.pop_back();
        cout << command << " " << ip << "; #" << mp[ip] << endl;
    }

    return 0;
}