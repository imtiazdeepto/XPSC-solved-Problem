#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define all(x) (x).begin(), (x).end()
#define int long long
#define tc int x; cin >> x; while (x--)

signed main() {
    Code By ImtiazDeepto

    tc {
        int a, b, k;
        cin >> a >> b >> k;
        
        vector<int> v(a);
        vector<int> v1(b);
        
        for (int i = 0; i < a; i++) {
            cin >> v[i];
        }
        
        for (int i = 0; i < b; i++) {
            cin >> v1[i];
        }

        sort(all(v1));
        
        int ans = 0;

        for (int i = 0; i < a; i++) {
            int ck = k - v[i];
            if (ck < 0) continue; 
            
            int cnt = upper_bound(all(v1), ck) - v1.begin();
            ans += cnt;
        }
        
        cout << ans << endl;
    }

    return 0;
}