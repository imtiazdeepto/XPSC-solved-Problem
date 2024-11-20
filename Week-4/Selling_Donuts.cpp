//https://www.codechef.com/problems/DONUTSELL
// Solved at: 20 nov 2024 8:40 pm
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
        int a, b;
        cin >> a >> b;
        vector<int> donut(a);
        for (int i = 0; i < a; i++)
            cin >> donut[i];
        vector<int> customer(b);
        int ans = 0;
        for (int i = 0; i < b; i++)
        {
            int x;
            cin >> x;
            x--;
            if (donut[x] > 0)
                donut[x] = donut[x] - 1;
            else
                ans++;
        }

        cout << ans << endl;
    }

    return 0;
}