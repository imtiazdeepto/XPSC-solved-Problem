// https://www.codechef.com/problems/MNR
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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        if (n <= 3)
        {
            cout << 0 << endl;
            continue;
        }
        sort(All(v));
        int mn = LLONG_MAX;
        n--;
        mn = min({abs(v[1] - v[n - 1]), abs(v[2] - v[n]), abs(v[0] - v[n - 2])});
        cout << mn << endl;
    }
        return 0;
    }