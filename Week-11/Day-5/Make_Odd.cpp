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
        string a, b;
        cin >> a >> b;
        int total = 0, one = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1' || b[i] == '1')
            {
                total++;
            }
            if ((a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1'))
            {
                one++;
            }
        }
        if (total % 2 == 1 || one)
            yes;
        else
            no;
    }

    return 0;
}