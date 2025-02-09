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
signed main()
{

    Code By ImtiazDeepto

        tc
    {
        string s;
        cin >> s;
        int n = s.size();
        if (s[n - 1] == 's' and s[n - 2] == 'u')
        {
            s.pop_back();
            s.pop_back();
            s.push_back('i');
        }
        cout << s << endl;
    }

    return 0;
}