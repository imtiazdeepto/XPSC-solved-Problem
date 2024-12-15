//
//Solved at:
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

signed main()
{
    Code By ImtiazDeepto
     tc
    {
        string a;
        cin >> a;
        int sz = a.size() - 1;

        for (int i = 0; i <= sz / 2; i++)
        {
            if (a[i] == a[sz - i])
            {
                if (a[i] == 'p')
                {
                    a[i] = 'q';

                    a[sz - i] = 'q';
                }
                else if (a[i] == 'q')
                {
                    a[i] = 'p';
                    
                    a[sz - i] = 'p';
                }
            }
            else if (a[i] == 'w' || a[sz - i] == 'w')
            {
                if (a[i] == 'p')
                    a[i] = 'q';
                else if (a[i] == 'q')
                    a[i] = 'p';

                if (a[sz - i] == 'p')
                    a[sz - i] = 'q';
                else if (a[sz - i] == 'q')
                    a[sz - i] = 'p';

                swap(a[i], a[sz - i]);
            }
        }
        cout << a << endl;
    }

    return 0;
}
