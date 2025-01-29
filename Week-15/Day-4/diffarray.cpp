//
// Solved at:
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define all(x) (x).begin(), (x).end()
#define int long long
#define tc    \
    int x;    \
    cin >> x; \
    while (x--)
const int N = 1e8;

signed main()
{

    Code By ImtiazDeepto

        int n,
        q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> vv(n + 1, 0);

    while (q--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        vv[l - 1] += k;//increase the l'th index
        vv[r] -= k;//decrease the r'th index
        
    }
    // prefix sum
    for (int i = 0; i <= n; i++)
    {
        vv[i + 1] += vv[i];
    }
    // for(auto el:vv){
    //     cout<<el<<" ";
    // }cout<<endl;
    for (int i = 0; i < n; i++)
    {
        v[i] += vv[i];
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}