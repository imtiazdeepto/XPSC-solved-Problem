//https://www.codechef.com/problems/YOGACLASS
// Solved at:
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define All(x) (x).begin(), (x).end()
#define int long long
const int N = 1e8;

signed main()
{

    Code By ImtiazDeepto

        int T;
    cin >> T;
    while (T--)
    {
        int time, X, Y;
        cin >> time >> X >> Y;

        int maxMoney = 0;

        for (int i = 0; i <= time; i++)
        {
            if (i * 2 <= time)
            {
                int type2 = i;
                int type1 = (time - i * 2);
                int Money = type1 * X + type2 * Y;
                maxMoney = max(maxMoney, Money);
            }
        }

        cout << maxMoney << endl;
    }

    return 0;
}