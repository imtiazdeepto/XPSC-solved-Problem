#include <bits/stdc++.h>

#include <iostream>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define tc    \
    int x;    \
    cin >> x; \
    while (x--)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define all(x) (x).begin(), (x).end()
#define int long long

signed main() {
    Code By ImtiazDeepto

        tc {
        int X, Y, K;
        cin >> X >> Y >> K;

        int time = 0;
        int sum = X + Y;

        while (time <= sum) {
            int diff = abs(X - Y);

            if (diff == K) {
                cout << time << endl;
                break;
            }
            if (diff > K) {
                if (X > Y) {
                    X--;
                    Y++;
                } else {
                    Y--;
                    X++;
                }
            } else {
                if (X > Y) {
                    X++;
                    Y--;
                } else {
                    Y++;
                    X--;
                }
            }
            time++;
            if (K > X + Y) {
                cout << -1 << endl;
                break;
            }
        }

        if (time > sum) {
            cout << -1 << endl;
        }
    }

    return 0;
}