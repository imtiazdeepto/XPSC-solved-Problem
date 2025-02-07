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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > mx + 1)
        {
            cout << i + 1 << endl;
            return 0;
        }
        mx = max(mx, v[i]);
    }
    cout << -1 << endl;

    return 0;
}