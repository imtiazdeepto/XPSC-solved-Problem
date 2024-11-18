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
bool isDivisor(int n, int d)
{
    return n % d == 0;
}
signed main()
{

    Code By ImtiazDeepto

        tc
    {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> a;
        int ans = n - 2;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (isDivisor(ans, v[i]))
            {
                a.push_back(v[i]);
                mp[v[i]]++;
            }
        }
        sort(all(a));
        if (ans == 1)
            cout << 1 << " " << 1 << endl;
        else
        {
            int i = 0;
            while (true)
            {
                int x = ans / a[i];
                if (mp[x] == 1 and a[i] == x)
                    continue;
                else if (mp[x] >= 1)
                {
                    cout << a[i] << " " << x << endl;
                    break;
                }
                else
                {
                    i++;
                }
            }
        }
    }
    return 0;
}