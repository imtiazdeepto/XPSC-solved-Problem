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

signed main()
{
    Code By ImtiazDeepto

        tc
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        // if (n == 1)
        // {
        //     cout << v[0] << endl;
        //     continue;
        // }
        // if (n == 2)
        // {
        //     if (v[0] % v[1] == 0 && v[1] % v[0] == 0)
        //     {
        //         cout << 0 << endl;
        //     }
        //     else if (v[0] % v[1] == 0)
        //     {
        //         cout << v[0] << endl;
        //     }
        //     else if (v[1] % v[0] == 0)
        //     {
        //         cout << v[1] << endl;
        //     }
        //     continue;
        // }

        int g1 = v[0], g2 = v[1];
        for (int i = 2; i < n; i++)
        {
            if (i % 2 == 0)
            {
                g1 = __gcd(g1, v[i]);
            }
            else
            {
                g2 = __gcd(g2, v[i]);
            }
        }

        bool found_g1 = false, found_g2 = false;
        for (int i = 1; i < n; i += 2)
        {
            if (v[i] % g1 == 0)
            {
                found_g1 = true;
                break;
            }
        }
        if (found_g1)
        {
            for (int i = 0; i < n; i += 2)
            {
                if (v[i] % g2 == 0)
                {
                    found_g2 = true;
                    break;
                }
            }
        }

        
        if (!found_g1)
        {
            cout << g1 << endl;
        }
        else if (!found_g2)
        {
            cout << g2 << endl;
        }
        else if (found_g1 and found_g2)
        {
            cout << 0 << endl;
        }
    }

    return 0;
}