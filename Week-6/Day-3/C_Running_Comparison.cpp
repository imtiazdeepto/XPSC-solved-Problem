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
        int days;
        cin >> days;
        vector<int> alice(days);
        vector<int> bob(days);

        for (int i = 0; i < days; i++)
        {
            cin >> alice[i];
        }
        for (int i = 0; i < days; i++)
        {
            cin >> bob[i];
        }
                int ans = 0;

        for (int i = 0; i < days; i++)
        {
            if(alice[i]>bob[i]){
                if((bob[i]*2)>=alice[i]){
                    ans++;
                }
            }else{
                if(bob[i]<=(2*alice[i])){
                    ans++;
                }

            }
        }
        cout << ans << endl;
    }

    return 0;
}