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

    Code By ImtiazDeepto int n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    int red = p * (n / a);
    int blue = q * (n / b);
    int lcm = (a / __gcd(a, b)) * b;
    int cnt = n / lcm;
    int mx = max(p, q);
    if (p != mx)
    {
        red -= (cnt * p);
    }
    if (q != mx)
    {
        blue -= (cnt * q);
    }
    cout << red + blue << endl;

    return 0;
}