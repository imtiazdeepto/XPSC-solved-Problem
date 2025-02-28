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

bool Square(int num) {
    int root = static_cast<int>(sqrt(num));
    return root * root == num;
}

void solve() {
    int n;
    cin >> n;
    int sm = n * (n + 1) / 2;
    if (n == 1 or Square(sm)) {
        cout << -1 << endl;
        return;
    }
    vector<int> v(n), v2;
    for (int i = 0; i < n; ++i) {
        v[i] = i + 1;
    }
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += v[i];
        if (Square(sum)) {
            if (i + 1 < n) {
                sum-=v[i];
                swap(v[i], v[i + 1]);
                sum+=v[i];
                // cout<<v[i]<<"=="<<v[i+1]<<"-->"<<sum<<endl;
            }
        }
        // cout<<"-->"<<v[i]<<endl;
        // int smm = (i * (i + 1)) / 2;
        // if (!Square(smm)) {
        //     v.push_back(i);
        // } else {
        //     v2.push_back(i);
        // }
    }

    // for (int el : v) {
    //     cout << el << " ";
    // }
    // for (int el : v2) {
    //     // cout << el << " ";
    //     v.push_back(el);
    // }
    for (int el : v) {
        cout << el << " ";
    }

    cout << endl;
    // int ans = 0;
    // for (int el : v) {
    //     ans += el;
    //     cout << ans << " ";
    //     // cout << el << " ";
    // }
}

signed main() {
    Code By ImtiazDeepto

        tc {
        solve();
    }

    return 0;
}