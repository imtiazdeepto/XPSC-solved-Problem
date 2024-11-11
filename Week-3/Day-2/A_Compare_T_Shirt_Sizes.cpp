// https://codeforces.com/problemset/problem/1741/A
// Solved at:Nov/11/2024 20:55UTC+6
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define All(x) (x).begin(), (x).end()
#define int long long
const int N = 1e8;

signed main()
{

    Code By ImtiazDeepto

        int t;
    cin >> t;
    while (t--)
    {
        string s, ss;
        cin >> s >> ss;
        if (s == ss)
            cout << "=" << endl;
        else
        {
            int slen = s.length() - 1;
            int sslen = ss.length() - 1;
            if (s[slen] == 'M')
            {
                if (ss[sslen] == 'S')
                {
                    cout << ">" << endl;
                }
                else
                {
                    cout << "<" << endl;
                }
            }
            else if (ss[sslen] == 'M')
            {
                if (s[slen] == 'L')
                {
                    cout << ">" << endl;
                }
                else
                {
                    cout << "<" << endl;
                }
            }
            else if (s[slen] == 'S' && ss[sslen] == 'L')
            {
                cout << "<" << endl;
            }
            else if (s[slen] == 'L' && ss[sslen] == 'S')
            {
                cout << ">" << endl;
            }
            else if (s[slen] == ss[sslen])
            {
                if (s[slen] == 'S')
                {
                    if (slen < sslen)
                    {
                        cout << ">" << endl;
                    }
                    else
                    {
                        cout << "<" << endl;
                    }
                }
                else
                {
                    if (slen < sslen)
                    {
                        cout << "<" << endl;
                    }
                    else
                    {
                        cout << ">" << endl;
                    }
                }
            }
        }
    }

    return 0;
}