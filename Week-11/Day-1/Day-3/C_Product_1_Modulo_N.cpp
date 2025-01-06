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
    Code By ImtiazDeepto int n;
    cin >> n;
    vector<int> v;
    for (int i = 1; i < n; ++i)
    {
        if (__gcd(n, i) == 1)
            v.push_back(i);
    }
    int ans = 1;
    for (int i = 0; i < n; ++i)
    {
        ans = (ans * v[i]) % n;
    }
    if (ans == 1)
    {

        cout << v.size() << endl;
        for (auto el :v)
            cout << el << " ";
        cout << endl;
    }
    else
    {
        cout << v.size()-1 << endl;
        for (int el=0;el < v.size();el++){
            if(v[el]==ans)continue;
            cout << v[el] << " ";
        }
        cout << endl;
    }

    return 0;
}