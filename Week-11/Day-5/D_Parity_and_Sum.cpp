//https://codeforces.com/contest/1993/problem/B

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
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
        vector<int> evn, odd;
        while (n--)
        {
            int x;
            cin >> x;
            if (x & 1)
            {
                odd.push_back(x);
            }
            else
            {
                evn.push_back(x);
            }
        }
        if (evn.size() == 0 || odd.size() == 0)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {

            sort(all(evn));
            sort(all(odd));
            int mx = odd.back();
            int n = evn.size();
            int ans = 0;
            int yes=0;
            for (int i = 0; i < n; i++)
            {
                if (evn[i] > mx)
                {
                    cout << n + 1 << endl;
                    yes=1;
                    break;
                }
                else
                {
                    ans++;
                    mx += evn[i];
                }
            }
            if(yes==0)
            cout << ans << endl;
        }
    }

    return 0;
}