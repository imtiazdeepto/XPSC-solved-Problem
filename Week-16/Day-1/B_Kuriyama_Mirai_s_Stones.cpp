#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
#define int long long
using namespace __gnu_pbds;
template <class T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class T>
using pbds_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1,0);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    vector<int> v2(n + 1,0);
    // vec = v;
    v2[1] = v[1];
    for (int i = 2; i <= n; i++)
    {
        v2[i] = v[i] + v2[i - 1];
    }
    // for (auto el : v2)
    //     cout << el << " ";
    //     cout<<endl;
    sort(v.begin(), v.end());
    vector<int>vec(n + 1,0);
    // vec = v;
    vec[1] = v[1];

    for (int i = 2; i <= n; i++)
    {
        vec[i] = v[i] + vec[i - 1];
    }
    // for (auto el : vec)
    //     cout << el << " ";
    int t;
    cin >> t;
    while (t--)
    {
        int type, l, r;
        cin>>type>>l>>r;
        if (type == 1)
        {
            cout<<v2[r]-v2[l-1]<<endl;;
        }else{
            cout<<vec[r]-vec[l-1]<<endl;
        }
    }
}

signed main()
{
    solve();
}