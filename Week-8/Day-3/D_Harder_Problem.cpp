//
// Solved at:Dec/16/2024 00:33UTC+6
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
        vector<int> v(n);
        map<int, bool> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]] = true;
        }

        stack<int> stk;
        for (int i = 0; i <= n; i++)
        {
            if (mp[i] == true)
                continue;
            else
            {
                stk.push(i);
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (mp[v[i]])
            {
                cout << v[i] << " ";
                mp[v[i]] = false;
            }
            else
            {
                cout << stk.top() << " ";
                stk.pop();
            }
        }
        cout << endl;
    }

    return 0;
}