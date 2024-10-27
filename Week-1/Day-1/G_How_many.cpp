//https://atcoder.jp/contests/abc214/tasks/abc214_b?lang=en
//Solved at: 27 oct 2024
#include<bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define int long long
const int N=1e8;

signed main(){

    Code By ImtiazDeepto

  int s, t;
    cin >> s >> t;

    int count = 0;
    for (int i = 0; i <= s; i++)
    {
        for (int j = 0; j <= s - i; j++)
        {
            for (int k = 0; k <= s - i - j; k++)
            {
                // cout << i << " " << j << " " << k << "\n";
                if (i * j * k <= t)
                {
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;

return 0;
}