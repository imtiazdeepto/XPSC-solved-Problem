// https://www.codechef.com/problems/STRAME
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

signed main()
{

    Code By ImtiazDeepto

        tc
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int zero = 0, one = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                zero++;
            if (s[i] == '1')
                one++;
        }
        int alter = min(one, zero);
        if (alter & 1)
            cout << "Zlatan" << endl;
        else
            cout << "Ramos" << endl;
    }

    return 0;
}