//https://codeforces.com/problemset/problem/1790/D
// Solved at:
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
        map<int, int> mp;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(All(v));
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            int val = v[i];
            if (mp[v[i]] != 0)
            {
                res++;
                while (mp[val] > 0)
                {
                    mp[val]--;
                    val++;
                }
            }
        }
        cout << res << endl;
    }

    return 0;
}