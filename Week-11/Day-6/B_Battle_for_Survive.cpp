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
    Code By ImtiazDeepto tc
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int sum = 0;
        for (int i = 0; i < n - 2; ++i)
        {
            cin >> v[i];
            sum += v[i];
        }
        int n_2;
        cin >> n_2;
        n_2 -= sum;
        int l;
        cin >> l;
        l -= n_2;
        cout << l << endl;
    }

    return 0;
}