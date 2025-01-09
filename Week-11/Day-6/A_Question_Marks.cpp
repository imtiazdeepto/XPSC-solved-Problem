//
#include <bits/stdc++.h>
#include <iostream>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define tc    \
    int x;    \
    cin >> x; \
    while (x--)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define all(x) (x).begin(), (x).end()
#define int long long
signed main()
{
    Code By ImtiazDeepto

        tc
    {

        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> arr(4);
        for (auto el : s)
        {
            // cout<<" "<<el;
            if (el == '?')
                continue;
            int j = el - 'A';
            arr[j] = min(arr[j] + 1, n);
        }
        int ans = 0;
        for (int i = 0; i < 4; i++)
            ans += arr[i];
        cout << ans << endl;
    }

    return 0;
}