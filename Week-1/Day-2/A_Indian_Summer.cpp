//
// Solved at:
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define int long long
const int N = 1e8;

signed main()
{

    Code By ImtiazDeepto

        int test;
    cin >> test;
    set<pair<string, string>> v;
    for (int i = 0; i < test; i++)
    {
        string str, str2;
        cin >> str >> str2;
        v.insert({str, str2});
    }
    cout << v.size() << endl;
    return 0;
}