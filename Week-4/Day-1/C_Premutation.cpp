//https://codeforces.com/problemset/problem/1790/C
// Solved at:Nov/17/2024 01:50UTC+6
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
        int mat[n + 1][n];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                cin >> mat[i][j];
            }
        }
        //  for(int i=0; i<n;i++){
        //     for(int j=0; j<n-1;j++){
        //         cout<< mat[i][j]<<" ";
        //     }cout<< endl;
        // }
        map<int, int> mp;
        map<int, int> mp2;
        // cout << mat[1][n-1] << "->";

        for (int i = 1; i <= n; i++)
        {
            // cout << mat[i][n - 1] << "->";
            mp[mat[i][n - 1]] = i;
            mp2[mat[i][n - 1]]++;
        }
        // for (auto el : mp2)
        // {
        //     cout<< el.first<<"-> "<<el.second << endl;
        // }

        int ans = 0, last = 0;
        for (auto el : mp2)
        {
            if (el.second == 1)
                ans = el.first;
            else
                last = el.first;
        }
        int ansrow=mp[ans];
        for (int i = 1; i < n; i++)
        {
            cout << mat[ansrow][i] << " ";
        }
        cout << last << endl;
    }

    return 0;
}