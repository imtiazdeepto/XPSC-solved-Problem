//
// Solved at:
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

        tc
    {
        int s, l;
        cin >> s >> l;
        int cnt = 0;
        int k = 1;
        int m=s;
        for (int i = 0; i < s; i++)
        {
            if (cnt != l-1)
            {
                cout << m << " ";m--;
                cnt++;
            }
            else
            {
                cout << k << " ";
                k++;
                cnt=0;
            }
        }cout<<endl;
    }

    return 0;
}