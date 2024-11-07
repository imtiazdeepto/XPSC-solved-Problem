//https://codeforces.com/problemset/problem/1800/C2
//Solved at: Nov/07/2024 01:32UTC+6
#include<bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define int long long
const int N=1e8;

signed main(){

Code By ImtiazDeepto
  int t;
    cin >> t;
    while (t--)
    {
        int z;
        cin >> z;
        priority_queue<int> pq;
        int power = 0;
        for (int i = 0; i < z; i++)
        {
            int y;
            cin >> y;
            if (y == 0)
            {
                if (!pq.empty())
                {
                    int u = pq.top();
                    power += u;
                    pq.pop();
                }
            }
            else
            {
                pq.push(y);
            }
        }
        cout << power << endl;
    }


return 0;
}