/*
  In the name of Allah, The Most Gracious and The Most Merciful.
*/ \
#include<bits/stdc++.h>
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
        int n, x;
        unsigned long t;
        string s;
        cin >> n >> x >> t;
        cin >> s;
        unsigned long count = 0;
        int position = x;
        unsigned long time = 0;
        // int cnt_R = 0;
        // int cnt_L = 0;
        // for (auto el : s) {
        //     if (el == 'R')
        //         cnt_R++;
        //     else
        //         cnt_L++;
        // }

        while (time < t) {
            for (int i = 0; i < n && time < t; i++) {
                if (s[i] == 'L') {
                    position--;
                } else if (s[i] == 'R') {
                    position++;
                }
                time++;
                if (position == 0) {
                    count++;
                    position = x;
                    break;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}
