//https://www.codechef.com/problems/ALTTAB
// Solved at:  08:05 pm 10 Nov 2024
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define All(x) (x).begin(), (x).end()
#define int long long
const int N = 1e8;

bool cmp(pair<string, int> a, pair<string, int> b)
{
    return a.second > b.second;
}
signed main()
{
    Code By ImtiazDeepto

        int t;
    cin >> t;
    int n = 1;
    map<string, int> mp;

    while (t--)
    {
        string s;
        cin >> s;
        mp[s] = n;
        n++;
    }

    vector<pair<string, int>> vec(mp.begin(), mp.end());
    sort(vec.begin(), vec.end(), cmp);
    vector<char> stk;
    for (auto el : vec)

    {
        string str = el.first;
        int n = str.size();
        cout<<str[n-2]<<str[n-1];
        // stk.push_back(str[n - 2]);
        // stk.push_back(str[n - 1]);
    }
    // for (int i = 0; i < stk.size(); i++)
    // {
    //     cout << stk[i];
    // }

    return 0;
}
