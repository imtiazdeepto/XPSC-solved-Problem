// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A
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
        k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) 
        cin >> v[i];
    int l = 0, r = 0, mxlen = INT_MAX, sum = 0;
    while (r < n)
    {   
        sum += v[r];
        while (sum >= k)
        {
            mxlen = min(mxlen, r - l + 1);
            sum -= v[l];
            l++;
        }

        r++;
    }
    if (mxlen == INT_MAX)
        cout << "-1" << endl;
    else
        cout << mxlen << endl;

    return 0;
}