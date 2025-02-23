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
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        int OneToZero = 0, ZeroToOne = 0, Tot = 0;
        for (int i = 0; i < n; i++) {
            if (s1[i] =='0' and s2[i] == '1') ZeroToOne++;
            if (s1[i] == '1' and s2[i] == '0') OneToZero++;
            if(s1[i]!=s2[i])Tot++;
        }
        // cout<<OneToZero<<" "<<ZeroToOne<<" "<<Tot<<endl;
        cout<<Tot-min(OneToZero,ZeroToOne)<<endl;
    }

    return 0;
}