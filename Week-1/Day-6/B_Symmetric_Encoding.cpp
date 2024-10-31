//https://codeforces.com/contest/1974/problem/B
// Solved at:Oct/31/2024 23:15UTC+6
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define int long long
const int N = 1e8;
#define el endl
signed main()
{

    Code By ImtiazDeepto

        int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        string str2 = str;
        sort(str.begin(), str.end());
        set<char> st(str.begin(), str.end());
        vector<char> ch;
        map<char, char> mp;

        for (auto it = st.begin(); it != st.end(); ++it)
        {
            ch.push_back(*it);
        }

        int len = ch.size();
        for (int i = 0; i < len; i++)
        {
            mp[ch[i]] = ch[len - i - 1];
        }

        // for(auto it:mp){
        //     cout << it.first << " " << it.second << endl;
        // }
        for (int i = 0; i < str2.size(); i++)
        {
            cout << mp[str2[i]];
        }
        cout << endl;
    }
    return 0;
}