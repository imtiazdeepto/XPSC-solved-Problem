// https://www.codechef.com/problems/EVENSUMSUB
// Solved at: 12:46 am 30 OCT 2024
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define int long long
const int N = 1e8;

signed main()
{

    Code By ImtiazDeepto int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int ans = 0;
        for (int i = 0; i < n; i++)
            cin >> v[i];
        if (n == 1)
        {
            if (v[0] % 2)
                cout << 0 << endl;
            else
            {
                cout << 1 << endl;
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                int sum = v[i];
                int count = 1;
                if (sum % 2 == 0)
                    ans = max(count, ans);

                for (int j = i + 1; j < n; j++)
                {
                    sum += v[j];
                    if (sum % 2 != 0)
                    {
                        count++;
                    }
                    else
                    {
                        count++;
                        ans = max(count, ans);
                    }
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}