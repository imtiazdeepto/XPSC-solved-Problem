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

        int n;
    cin >> n;
    // int to string
    string s = to_string(n);
    int x = s.length();
    if (x == 4)
    {
        cout << s << endl;
    }
    else if (x == 3)
    {
        cout << "0" << s << endl;
    }else if (x == 2)
    {
        cout << "00" << s << endl;

    }else if(x==1)
    {
        cout << "000" << s << endl;
    }

    return 0;
}
