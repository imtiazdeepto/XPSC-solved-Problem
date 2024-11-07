//https://codeforces.com/problemset/problem/1622/B
// Solved at:Nov/07/2024 01:06UTC+6
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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        string str;
        cin >> str;
        vector<int> st0;
        vector<int> st1;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0')
            {
                st0.push_back(v[i]);
            }
            else if (str[i] == '1')
            {
                st1.push_back(v[i]);
            }
        }
        sort(st0.begin(), st0.end());
        sort(st1.begin(), st1.end());
        map<int, int> mp;
        int i = 1;
        for (auto el : st0)
        {
            // cout<<el<<" index:  "<<i<<endl;
            mp[el] = i;
            i++;
        }
        for (auto el : st1)
        {
            // cout<<el<<" index:  "<<i<<endl;
            mp[el] = i;

            i++;
        }
        for(int i = 0; i < n; i++){
            cout<<mp[v[i]]<<" ";
        }
        cout<<endl;
        
    }

    return 0;
}