//https://cses.fi/problemset/task/1095
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
const long long  mod = 1e9 + 7;
int power(int a, int b)
{
    int res = 1 % mod;
    while (b)
    {
        if (b & 1)
            res = (res % mod * a % mod) % mod;

        a =  a * a % mod;
        b >>= 1;
    }
    return res;
}
signed main()
{
    Code By ImtiazDeepto

        tc
    {
        int a, b;
        cin>>a>>b;
        cout << power(a, b) << endl;
    }

    return 0;
}