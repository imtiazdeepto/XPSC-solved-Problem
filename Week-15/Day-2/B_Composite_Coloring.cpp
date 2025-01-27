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

    Code By ImtiazDeepto int prime[11] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    tc
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= 11; j++)
            {
                if (v[i] % prime[j] == 0)
                {
                    mp[prime[j]].push_back(v[i]);
                    break;
                }
            }
        }

        map<int,int>m;
        int color = 1;
        for (auto [a,b] : mp)
        {
            // cout<<a<<" ->";
            for (auto x : b)
            {
                m[x] = color;
                // cout<<x<<" ";
            }
            color++;
            // cout << endl;
        }
        cout<<mp.size()<<endl;
        for (auto el : v)
        {
            cout << m[el] << " ";
        }
        cout << endl;
    }

    return 0;
}