//
// Solved at:
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define all(x) (x).begin(), (x).end()
#define int long long
#define tc    \
    int x;    \
    cin >> x; \
    while (x--)
const int N = 1e8;

signed main()
{

    Code By ImtiazDeepto

        tc
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<pair<int, int>> pr;
        for (int i = 0; i < n; i++)
        {
            int cnt = __popcount(v[i] ^ k);
            pr.push_back({cnt, v[i]});
        }
        sort(pr.begin(), pr.end());
        for (auto x : pr)
        {
            cout << x.second << " ";
        }cout<<endl;
    }

    return 0;
}