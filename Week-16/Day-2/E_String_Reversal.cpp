// https://codeforces.com/problemset/problem/1430/E
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;
#define all(x) (x).begin(), (x).end()
// #define int long long
using ll = long long;
#define tc    \
    int x;    \
    cin >> x; \
    while (x--)
const int N = 1e8;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <class T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class T>
using pbds_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

signed main()
{

    Code By ImtiazDeepto

        int n;
    cin >> n;
    string s, r;
    cin >> s;
    r = s;
    reverse(all(r));

    map<char, vector<int>> mp_s, mp_r;
    for (int i = 0; i < n; i++)
    {
        mp_s[s[i]].push_back(i);
        mp_r[r[i]].push_back(i);
    }
    // for (auto [x, y] : mp_s)
    // {
    //     cout << x << "-> ";
    //     ;
    //     for (auto el : y)
    //     {
    //         cout << el << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // for (auto [x, y] : mp_r)
    // {
    //     cout << x << "-> ";
    //     ;
    //     for (auto el : y)
    //     {
    //         cout << el << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    vector<int> ans(n);
    for (auto [x, y] : mp_s)
    {
        for (int i = 0; i < y.size(); i++)
        {
            ans[mp_r[x][i]] = mp_s[x][i];
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << ans[i] << " ";
    // }cout<<endl;
    ll rr = n - 1;
    ll res = 0;
    pbds<int> p;
    while (rr >= 0)
    {
        res += p.order_of_key(ans[rr]);
        // cout << ans[rr] << "->";
        // cout << p.order_of_key(ans[rr]) << " ";

        p.insert(ans[rr]);
        rr--;
    }
    // cout << endl;
    cout << res << endl;
    return 0;
}