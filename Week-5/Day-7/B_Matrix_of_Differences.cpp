// https://codeforces.com/problemset/problem/1783/B
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

signed main()
{

    Code By ImtiazDeepto

        tc
    {
        int n;
        cin >> n;
        int len = n * n;
        vector<int> v;
        int a = 1, b = n * n;
        for (int i = 0; i <= len / 2; i++)
        {
            v.push_back(b);
            v.push_back(a);
            a++;
            b--;
        }
        // print matrix
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << v[i * n + j] << " ";
                }
            }
            else
            {
                for (int j = n - 1; j >= 0; j--)
                {
                    cout << v[i * n + j] << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}