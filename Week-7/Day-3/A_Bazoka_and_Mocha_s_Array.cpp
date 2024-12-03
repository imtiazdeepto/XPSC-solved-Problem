//https://codeforces.com/contest/1975/problem/A
// Solved at: Dec/03/2024 01:29UTC+6
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
        vector<int> v1(n);
        int idx = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (int i = 0; i < n - 1; i++) 
        {
            if (v1[i] > v1[i + 1])
            {
                idx = i + 1;
                break; 
            }
        }

        // cout << idx << " " << endl;
        vector<int> v2(n - idx);

        for (int i = 0; i < n - idx; i++)
        {
            v2[i] = v1[idx + i];
            // cout << v2[i] << " ";
        }
        // cout << endl;

        if (is_sorted(all(v1)))
        {
            cout << "Yes" << endl;
            continue;
        }
        vector<int> v3;
        for (int i = 0; i < (n - idx); i++) 
        {
            v3.push_back(v2[i]);
        }
        for (int i = 0; i < idx; i++)
        {
            v3.push_back(v1[i]);
        }
        if (is_sorted(all(v3)))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}