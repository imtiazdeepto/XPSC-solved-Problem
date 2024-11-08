//https://codeforces.com/problemset/problem/1986/C
//Nov/08/2024 19:55
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

        int t;
    cin >> t;
    while (t--)
    {
        int s1, s2;
        cin >> s1 >> s2;

        string str, str2;
        cin >> str;

        set<int> v;
        for (int i = 0; i < s2; i++)
        {
            int x;
            cin >> x;
            x--;
            v.insert(x);
        }
        cin >> str2;
        sort(str2.begin(), str2.end());
        int ind = 0;
        for (auto el : v)
        {
            str[el] = str2[ind];
            ind++;
        }
        cout << str << endl;
    }
}