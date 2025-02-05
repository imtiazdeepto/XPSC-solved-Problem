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

        tc
    {
        int X, Y;
        cin >> X >> Y;

        if (X == 0 && Y != 0)
        {
            for (int i = 0; i < Y; i++)
            {
                cout << 2;
            }
            cout << endl;
        }
        else if (Y == 0 && X != 0)
        {
            for (int i = 0; i < X; i++)
            {
                cout << 1;
            }
            cout << endl;
        }
        else
        {
            for (int i = 0; i < X / 2; i++)
            {
                cout << 1;
            }
            for (int i = 0; i < Y; i++)
            {
                cout << 2;
            }
            for (int i = 0; i < X / 2; i++)
            {
                cout << 1;
            }
            cout << endl;
        }
    }

    return 0;
}