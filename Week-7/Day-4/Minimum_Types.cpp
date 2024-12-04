//
// Solved at:
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define all(x) (x).rbegin(), (x).rend()
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
        int n, price;
        cin >> n >> price;
        vector<int> types;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            types.push_back(x);
        }
        vector<int> coins;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            coins.push_back(x);
        }
        map<int, int> mp;
        int ans = 0;
        vector<int>res;
        for (int i = 0; i < n; i++)
        {
            ans += (types[i] * coins[i]);
            res.push_back(types[i]*coins[i]);
        }
        // for(auto i: mp){
        //     cout << i.first << " " << i.second << endl;
        // }cout<<endl;
         sort(all(res));

        if (ans < price)
        {
            cout << "-1" << endl;
        }
        else
        {
          
            int sum = 0;
            int k = 0;
            while (sum < price)
            {
                sum += res[k];
                k++;
            }
            cout << k << endl;
        
    }
    }

    return 0;
}