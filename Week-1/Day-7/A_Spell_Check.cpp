// https://codeforces.com/problemset/problem/1722/A
// Solved at:Nov/02/2024 20:40UTC+6
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
        int n;
        cin >> n;
        string str, str2;
        cin >> str;
        str2 = "Timru";
        sort(str.begin(), str.end());
        if (str == str2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
  
        // cout<<str<<endl;
        // }
    }
    return 0;
}