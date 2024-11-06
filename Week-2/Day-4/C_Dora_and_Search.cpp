//https://codeforces.com/contest/1793/problem/C
// Solved at:Nov/06/2024 23:06UTC+6
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

        int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            s.insert(v[i]);
        }
        int l = 0,r=n - 1;
        bool ans = false;
        while (r > l)
        {
            int mx = *s.rbegin();
            int mn = *s.begin();

            if ((v[l] != mx && v[l] != mn) && (v[r] != mx && v[r] != mn))
            {
                ans = true;
                break;
            }
            else if (v[l] == mx || v[l] == mn)
            {
                s.erase(v[l]);
                l++;
            }
            else if (v[r] == mx || v[r] == mn)
            {
                s.erase(v[r]);
                r--;
            }
        }
        if (ans)
        {
            cout << l + 1 << " " << r + 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}