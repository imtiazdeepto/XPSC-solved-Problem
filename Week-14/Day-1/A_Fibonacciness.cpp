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
        int a, b, d, e;
        cin >> a >> b >> d >> e;
        int c1 = d - b;
        int c2 = e - d;
        int c3 = 0;
        int ans1=0, ans2=0, ans3=0;
       
        if (c1 == a + b)
            ans1++;
        if (d == b + c1)
            ans1++;
        if (e == c1 + d)
            ans1++;

        if (c2 == a + b)
            ans2++;
        if (d == b + c2)
            ans2++;
        if (e == c2 + d)
            ans2++;

        if (c3 == a + b)
            ans3++;
        if (d == b + c3)
            ans3++;
        if (e == c3 + d)
            ans3++;
        cout<<max(ans1,max(ans2,ans3))<<endl;
    }

    return 0;
}