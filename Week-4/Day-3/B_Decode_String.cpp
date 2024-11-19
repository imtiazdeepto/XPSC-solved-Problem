// https://codeforces.com/problemset/problem/1729/B
// Solved at:Nov/18/2024 13:00UTC+6
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

        map<int, char>
            mp;
    for (int i = 1; i <= 26; i++)
    {
        mp[i] = char(i + 'a' - 1);
    }

    tc
    {
        int n;
        cin >> n;

        string str;
        cin >> str;
       
        vector<char> v;

        for (int i = n - 1; i >= 0;) {
            if (str[i] != '0') {
                v.push_back(mp[str[i] - '0']);
                i--;
            } else {
                int num = (str[i - 2] - '0') * 10 + (str[i - 1] - '0');
                v.push_back(mp[num]);
                i -= 3; 
            }
        }

        reverse(v.begin(), v.end());
        for (char c : v) {
            cout << c;
        }
        cout << endl;
    }
    return 0;
}