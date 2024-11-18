//https://www.codechef.com/problems/INVEQ
// Solved at: 17 Nov 2024 7:12PM
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
        int x;
        cin >> x;
        string str;
        cin >> str;
        int part_0 = 0, part_1 = 0, i = 0;
        while (i < x)
        {
            if (str[i] == '0')
            {
                part_0++;
                while (i < x and str[i] == '0')
                    i++;
            }
            else if (str[i] == '1')
            {
                part_1++;
                while (i < x and str[i] == '1')
                    i++;
            }
        }
        cout << min(part_0, part_1) << endl;
    }

    return 0;
}