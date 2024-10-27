//https://codeforces.com/problemset/problem/621/A
// Solved at: 27 OCT 2024
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
    int arr[n];
    int evensum = 0, oddsum = 0;
    int minODD = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            evensum += arr[i];
        }

        else
        {
            oddsum += arr[i];
            minODD = min(minODD, arr[i]);
        }
    }
    if (oddsum % 2 == 0)
    {
        cout << evensum + oddsum << endl;
    }
    else
    {
        cout << evensum + oddsum - minODD << endl;
    }
    return 0;
}