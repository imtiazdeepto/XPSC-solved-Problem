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

        string str;
    cin >> str;
    sort(str.begin(), str.end());
    vector<char> ch;
    for (int i = 0; i < str.length(); i++)
    {
        ch.push_back(str[i]);
    }
    string str2 = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < str2.length(); i++)
    {
        auto ans = find(ch.begin(), ch.end(), str2[i]);
        if (ans == ch.end())
        {
            cout << str2[i] << endl;
            return 0;
        }
    }
    cout << "None" << endl;

    return 0;
}