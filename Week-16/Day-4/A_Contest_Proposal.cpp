//ACM contest
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
template <class T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class T>
using pbds_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;


int main()
{
    // file();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n), v2(n);
        for (int &el : v)
            cin >> el;
        for (int &el : v2)
            cin >> el;
        int i = 0, j = 0,ans=0;
        while (i < n and j < n)
        {
            if (v2[j] < v[i])
            {
                j++;
                ans++;
            }
            else
            {
                i++;
                j++;
            }
        }
        cout<<ans<<endl;
    }
}