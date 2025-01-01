//
// Solved at:
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
#define all(x) (x).begin(), (x).end()
#define int long long
signed main()
{
    Code By ImtiazDeepto tc
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }

        long long change = 0, preSum = 0;
        for (int i = 0; i < N; ++i)
        {
            preSum += A[i];
            change += abs(preSum);
        }

        cout << change << endl;
    }

    return 0;
}