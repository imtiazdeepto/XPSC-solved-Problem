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

    Code By ImtiazDeepto tc
    {
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        int count = 0, cnt = 0;
        for (auto i : mp)
        {
            if (i.second == 1)
            {
                count++;
            }
            else{
                cnt++;
            }
           
        }
        // cout << count << endl;
        int alice = 0;
        if (count % 2 == 0)
        {
            alice += (count / 2);
            alice += alice;
        }
        else
        {
            alice += (count / 2) + 1;
            alice += alice;
        }
    
        alice+=cnt;
        
        cout << alice << endl;
    }

    return 0;
}