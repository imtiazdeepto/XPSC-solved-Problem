//https://www.codechef.com/problems/ADJSUMLOST
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
        int n;
        cin >> n;
        vector<int> v(n-1);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> v[i];
        }
        sort(all(v));
        vector<int> ans(n);
        ans[0] = 1;
        // cout << v[0] <<endl;
        for (int i = 0; i < n-1; i++)
        {
            ans[i+1]=(v[i]-ans[i]);
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }cout << endl;
    }

    return 0;
}