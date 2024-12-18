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
        vector<int> v;
        int cnt = 0;
        int q; 
        cin >> q;

        for (int i = 0; i < q; ++i)
        {
            int x;
            cin >> x;
            int down = cnt;
            if((v.size() > 0 && v.back() > x))down ++;

            if (down == 0 || (down == 1 && x <= v[0]))
            {
                v.push_back(x);
                cnt = down;
                cout << '1';
            }
            else
            {
                cout << '0';
            }
        }
        cout<<endl;
    }

    return 0;
}