// https://www.codechef.com/problems/P3149
// Solved at: 14 nov 2024 8:24 PM
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
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int l = 0, r = n - 1, cnt = 0;
        bool first = false, last = false;
        
        while (l <= r) {
            if (v[l] > 0) first = true;
            else if (first && v[l] < 0) cnt++;
            
            if (v[r] > 0) last = true;
            
            if (!first) l++;
            else if (first && last) l++;
            
            if (!last) r--;
        }
            cout << cnt << endl;
    }

    return 0;
}