//
// Solved at:
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define int long long
const int N = 1e8;

signed main()
{

    Code By ImtiazDeepto

        int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        map<int, set<int>> mp;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }
        while (q--)
        {
            int start, end;
            cin >> start >> end;
            if (mp.find(start) == mp.end() or mp.find(end) == mp.end())
            {
                cout << "NO" << endl;
            }
            else
            {
                if (*mp[start].begin() < *mp[end].rbegin())
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        
        }

        //  for(auto [x,y]:mp){
        //       cout<<x<<"->";
        //       for(auto el:y){
        //           cout<<el<<" ";
        //       }
        //       cout<<'\n';
        //   }
    }

    return 0;
}