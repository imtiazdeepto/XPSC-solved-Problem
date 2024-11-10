//https://www.codechef.com/problems/USELEC
// Solved at: 4:55 pm 10 Nov 2024
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

        int t;
    cin >> t;
    while (t--)
    {
        int state, extra;
        cin >> state >> extra;
        vector<int> Avotes(state);
        for (int i = 0; i < state; i++)
        {
            cin >> Avotes[i];
        }
        vector<int> Bvotes(state);
        for (int i = 0; i < state; i++)
        {
            cin >> Bvotes[i];
        }
        int aWin = 0, bWin = 0;
        vector<int> aNeeded;
        for (int i = 0; i < state; i++)
        {
            if (Avotes[i] > Bvotes[i])
            {
                aWin++;
            }
            else
            {
                bWin++;
                aNeeded.push_back((Bvotes[i] - Avotes[i]) + 1);
            }
        }
        if (aWin > bWin)
        {
            cout << "YES" << endl;
            continue;
        }
        // cout << aWin << " " << bWin << endl;
        sort(All(aNeeded));
        // for (int i = 0; i < aNeeded.size(); i++)
        // {
        //     cout << aNeeded[i] << " ";
        // }cout<< endl;
        int elect = ((abs(aWin - bWin)) / 2) + 1;
        // cout<<elect<<endl;
        int newState = 0;

        for (int i = 0; i < aNeeded.size() && extra > 0; i++)
        {

            if (aNeeded[i] <= extra)
            {
                extra -= aNeeded[i];
                newState++;
            }
            else
            {
                break;
            }
        }
        if (newState >= elect)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}