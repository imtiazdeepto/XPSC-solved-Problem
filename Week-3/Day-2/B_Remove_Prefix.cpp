//
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
        deque<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        int count = 0;
        int i = 0;
        while (mp.size() != n)
        {
            mp[v[i]]--;
            count++;
            if (mp[v[i]] == 0)
                mp.erase(v[i]);
            i++;
            n--;
        }
        cout << count << endl;
    }

    return 0;
}