// https://codeforces.com/problemset/problem/1690/D
// Solved at:Nov/13/2024 03:16UTC+6
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
        string str;
        cin >> str;
        queue<char> q;
        //sliding window approch
        int r = 0, l = 0, ans = LONG_LONG_MAX;
        while (r < n)
        {
            if (str[r] == 'W')
                q.push(str[r]);
            if (r - l + 1 == k)
            {
                if (!q.empty())
                {
                    int sz = q.size();
                    ans = min(ans, sz);
                    if (str[l] == q.front())
                        q.pop();
                }else{
                    ans=0;
                }
                l++;
            }
            r++;
        }
        cout<<ans<<endl;
    }

    return 0;
}