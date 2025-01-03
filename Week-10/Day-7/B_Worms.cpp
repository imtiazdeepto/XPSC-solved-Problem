// https://codeforces.com/contest/474/problem/B
#include <bits/stdc++.h>
#include <iostream>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define tc    \
    int x;    \
    cin >> x; \
    while (x--)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define all(x) (x).begin(), (x).end()
#define int long long
signed main()
{
    Code By ImtiazDeepto

        int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    vector<int> prefix(n);
    prefix[0] = v[0];
    for (int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] + v[i];
    // for(int el:prefix) cout <<el<<" ";
    // cout<<endl;
    tc
    {
        int y;
        cin >> y;
        auto upper = lower_bound(prefix.begin(), prefix.end(), y) - prefix.begin();
        cout << upper + 1 << endl;
    }
    return 0;
}