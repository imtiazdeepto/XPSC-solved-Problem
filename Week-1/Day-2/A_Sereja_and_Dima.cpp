//https://codeforces.com/contest/381/problem/A
// Solved at: 27 OCT 2024 11:50pm
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
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    int Sereja = 0;
    int Dima = 0;
    int left = 0, right = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (v[left] > v[right])
            {
                // cout << "s - " << v[left] << endl;
                Sereja += v[left];
                left++;
            }
            else
            {
                // cout << "s - " << v[right] << endl;
                Sereja += v[right];
                right--;
            }
        }
        else
        {
            if (v[left] > v[right])
            {
                // cout << "d - " << v[left] << endl;
                Dima += v[left];
                left++;
            }
            else
            {
                // cout << "d - " << v[right] << endl;
                Dima += v[right];
                right--;
            }
        }
    }
    cout << Sereja << " " << Dima << endl;
    return 0;
}