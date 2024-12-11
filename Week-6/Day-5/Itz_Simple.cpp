//
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
        int ch, ved, varun;
        cin >> ch >> ved >> varun;
        vector<int> vals(ch);
        int mx = -1;
        int sum = 0;
        for (int i = 0; i < ch; i++)
        {
            cin >> vals[i];
            mx = max(mx, vals[i]);
            sum += vals[i];
        }
        // cout<<sum<<endl;
        sum -= mx;
        ved += mx;
        varun += sum;
        if (varun > ved)
        {
            cout << "Varun" << endl;
        }
        else if (varun < ved)
        {
            cout << "Ved" << endl;
        }
        else
        {
            cout << "Equal" << endl;
        }
    }

    return 0;
}