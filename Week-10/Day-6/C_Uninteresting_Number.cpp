#include <bits/stdc++.h>
#include <iostream>

#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);

using namespace std;

#define tc \
    int x; \
    cin >> x; \
    while (x--)

#define yes cout << "YES" << endl
#define no cout << "NO" << endl

#define all(x) (x).begin(), (x).end()
#define int long long

signed main() {
    Code By ImtiazDeepto tc {
        string s;
        cin >> s;

        int sum = 0, two = 0, three = 0;

        for (char c : s) {
            sum += (c - '0');
            if (c == '2') two++;
            if (c == '3') three++;
        }

        two = min(two, 10LL);
        three = min(three, 10LL);

        for (int i = 0; i <= two; ++i) {
            for (int j = 0; j <= three; ++j) {
                if ((sum + i * 2 + j * 6) % 9 == 0) {
                    yes;
                    goto outofloop; 
                }
            }
        }

        no;

    outofloop:;
    }
    return 0;
}