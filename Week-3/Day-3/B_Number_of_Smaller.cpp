//
// Solved at:
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

        int n,
        m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int b[m];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    int i = 0, j = 0;
    int count = 0;
    while (j < m)
    {
        if (i <n and b[j] > a[i])
        {
            i++;
            count++;
        }
        else 
        {
            cout << count << " ";
            j++;
        }
    }

    return 0;
}