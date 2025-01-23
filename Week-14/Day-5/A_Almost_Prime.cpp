//https://codeforces.com/contest/26/problem/A
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

int pf(int n)
{
    set<int> fact;
    while (!(n % 2))
    {
        fact.insert(2);
        n /= 2;
    }
    for (int i = 3; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            fact.insert(i);
            n /= i;
        }
    }
    if (n > 1)
        fact.insert(n);
    return fact.size();
}
signed main()
{

    Code By ImtiazDeepto int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (pf(i) == 2)
            cnt++;
    }
    cout << cnt << endl;

    return 0;
}