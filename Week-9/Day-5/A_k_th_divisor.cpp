//https://codeforces.com/problemset/problem/762/A
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
vector<int> divisor(int n)
{
    vector<int> v;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (i != n / i)
                v.push_back(n / i);
        }
    }
    sort(all(v));
    return v;
}
signed main()
{

    Code By ImtiazDeepto

        int n,
        k;
    cin >> n;
    vector<int> v = divisor(n);
    cin >> k;
    if (v.size() < k)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << v[k - 1] << endl;
    }

    return 0;
}