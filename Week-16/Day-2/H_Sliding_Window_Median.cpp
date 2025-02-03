//
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

        int n,
        m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    pbds<pair<int, int>> p;
    int l = 0, r = 0;
    while (r < n)
    {
        p.insert({v[r], r});
        if (r - l + 1 == m)
        {
            int now = m / 2;
            if (m % 2 == 0)
                now--;
            auto x = p.find_by_order(now);
            cout << x->first << " ";
            p.erase({v[l], l});
            l++;
        }

        r++;
    }

    return 0;
}