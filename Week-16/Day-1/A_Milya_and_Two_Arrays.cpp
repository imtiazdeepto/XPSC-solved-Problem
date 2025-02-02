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
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> v2(n);
        set<int> s;
        set<int> s2;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            s.insert(v[i]);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
            s2.insert(v2[i]);
        }
        // cout<<s.size()<<" "<<s2.size() <<endl;
        if (s.size() == 1)
        {
            if (s2.size() < 3)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else if (s2.size() == 1)
        {
            if (s.size() < 3)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}