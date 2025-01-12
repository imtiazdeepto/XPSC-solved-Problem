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
        int a, b;
        cin >> a >> b;
        int l = b, r = a + b - 1;

        int real = (r * (r + 1)) / 2;
        int del = (l * (l - 1)) / 2;
        int sum = real - del;
        int need = sum / 2;
        int num = 0, ans = 0, res = 0;
        int temp = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            res = (mid * (mid + 1) / 2) - del;
            if (res <= need)
            {
                num = mid;
                temp = res;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        ans = sum - temp;
        int tmp = ans;
        ans = abs(ans - temp);
        // check next number
        num++;
        int ans2 = abs(temp + num - tmp + num);
        cout << min(ans, ans2) << endl;
    }

    return 0;
}