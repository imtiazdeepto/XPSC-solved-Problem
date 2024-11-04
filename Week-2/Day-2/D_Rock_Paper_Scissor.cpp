//Practice contest
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define int long long

signed main()
{
    Code By ImtiazDeepto

        int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string m, f;
        int mp = 0, fp = 0;

        cin >> m >> f;

        for (int i = 0; i < n; i++)
        {
            if (m[i] == f[i])
            {
                continue;
            }
            else if ((m[i] == 'R' && f[i] == 'S') || (m[i] == 'S' && f[i] == 'P') || (m[i] == 'P' && f[i] == 'R'))
            {
                mp++;
            }
            else
            {
                fp++;
            }
        }

        // cout << mp << " " << fp << endl;
        if (mp > fp)
        {
            cout << "0" << endl;
        }
        else
        {
            cout <<(fp- mp)/2+1<<endl;
        }
    }

    return 0;
}
