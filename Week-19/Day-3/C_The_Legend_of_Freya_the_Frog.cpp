    /*
    In the name of Allah, The Most Gracious and The Most Merciful.
    */
    #include <bits/stdc++.h>
    #define Code ios_base::sync_with_stdio(false);
    #define By cin.tie(NULL);
    #define ImtiazDeepto cout.tie(NULL);
    #define yes cout << "YES" << endl;
    #define no cout << "NO" << endl;
    using namespace std;
    #define all(x) (x).begin(), (x).end()
    #define int long long
    #define tc    \
        int x;    \
        cin >> x; \
        while (x--)
    const int N = 1e8;

    void solve() {
        int x, y, k;
        cin >> x >> y >> k;
        int x_dir = ceil(x * 1.0 / k * 1.0);
        int y_dir = ceil(y * 1.0 / k * 1.0);
        if (y_dir >= x_dir) {
            cout << y_dir * 2 << endl;
        } else {
            cout << 2 * x_dir - 1 << endl;
        }
    }

    signed main() {
        Code By ImtiazDeepto

            tc {
            solve();
        }

        return 0;
    }