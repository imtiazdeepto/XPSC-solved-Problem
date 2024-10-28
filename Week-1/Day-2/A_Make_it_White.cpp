//https://codeforces.com/problemset/problem/1927/A
//Solved at: Oct/28/2024 22:47UTC+6
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define int long long

signed main()
{
    Code By ImtiazDeepto

        int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        deque<char> a(str.begin(), str.end());

        while ((a.front() == 'W' || a.back() == 'W'))
        {
            if (a.front() == 'W')
                a.pop_front();
            if (a.back() == 'W')
                a.pop_back();
        }

        cout << a.size() << endl;
    }
    return 0;
}
