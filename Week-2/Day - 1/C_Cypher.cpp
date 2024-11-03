//https://codeforces.com/problemset/problem/1703/C
//Solved at:
#include<bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define int long long
const int N=1e8;

signed main(){

Code By ImtiazDeepto

 int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int ind = 0;
        while (ind < n) {
            int x;
            cin >> x;
            string str;
            cin >> str;

            for (int i = 0; i < x; i++) {
                if (str[i] == 'D') {
                    v[ind]++;
                    if (v[ind] == 10)
                        v[ind] = 0;
                } else if (str[i] == 'U') {
                    v[ind]--;
                    if (v[ind] == -1)
                        v[ind] = 9;
                }
            }
            ind++;
        }

        for (int i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << endl;
    }


return 0;
}