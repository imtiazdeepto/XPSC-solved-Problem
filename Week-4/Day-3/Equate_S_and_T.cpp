// https://www.codechef.com/problems/EQUATEST
// Solved at: 18 Nov 2024 11:58 pm
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
        int ssz, tsz;
        cin >> ssz >> tsz;
        string str, str2;
        cin >> str >> str2;
        if (str == str2)
        {
            cout << "Yes" << endl;
            continue;
        }
        int sA = 0, tA = 0, sB = 0, tB = 0;
        for (int i = 0; i < ssz; i++)
        {
            if (str[i] == 'a')
                sA++;
        }
        for (int i = 0; i < tsz; i++)
        {
            if (str2[i] == 'a')
                tA++;
        }
        if (sA != tA)
        {
            cout << "No" << endl;
            continue;
        }
        for (int i = 0; i < ssz; i++)
        {
            if (str[i] == 'a')
            {
                break;
            }
            sB++;
        }
        for (int i = 0; i < tsz; i++)
        {
            if (str2[i] == 'a')
            {
                break;
            }
            tB++;
        }
        if (sB == tB)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}