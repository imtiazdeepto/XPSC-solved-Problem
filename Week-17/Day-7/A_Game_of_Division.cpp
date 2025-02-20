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
signed main() {
    Code By ImtiazDeepto

        tc {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &x : a) cin >> x;
        int one = count(all(a), 1);
        if (k % 2 == 0 and one ) {
            yes;
            for (int i = 0; i < n; i++) {
                if (a[i] == 1) cout << i + 1 << endl;
                break;
            }
            continue;
        }
        
        auto check = [&](vector<int> &a) {
        
            int ans = 0;
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (abs(a[i] - a[j]) % k == 0) {
                        no;
                        return;
                    }
                }
                ans = i+1;
            }
            yes;
            cout << ans << endl;
        };
        if (k % 2 == 1) {
            if(k==1){
                yes;
                cout<<1<<endl;
                continue;
            }
            check(a);
        }
    }

    return 0;
}