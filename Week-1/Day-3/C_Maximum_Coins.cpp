//https://www.codechef.com/problems/MAXCOIN
// Solved at: 11 50 pm 29 Oct 2024
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define int long long
const int N = 1e8;

signed main()
{

    Code By ImtiazDeepto

        int test;
    cin >> test;
    while (test--)
    {
        int n, w;

        cin >> n >> w;
        if (n == w)
        {
            int coins = 0;

            for (int i = 1; i <= n; i++)
            {
                coins += pow(2, i);
            }
            cout << coins << endl;
        }
        else
        {
            int  wins = 0, loss = 0;
            for (int i = n; i > n - w; i--)
            {
                wins += pow(2, i);
            }
            for (int i = 1; i <= n - w; i++)
            {
                loss += pow(2, i);
            }
            cout << wins - loss << endl;
        }
    }

    return 0;
}