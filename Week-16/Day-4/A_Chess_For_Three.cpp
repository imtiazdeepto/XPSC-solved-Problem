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

    Code By ImtiazDeepto tc
    {
        int a, b, c;
        cin >> a >> b >> c;
        priority_queue<int> pq;
        if (a > 0)
            pq.push(a);
        if (b > 0)
            pq.push(b);
        if (c > 0)
            pq.push(c);
        int ans = 0;
        while (pq.size() > 1)
        {
            int tp = pq.top();
            pq.pop();
            int sec = pq.top();
            pq.pop();
            tp--;
            sec--;
            ans++;
            if (tp > 0)
                pq.push(tp);
            if (sec > 0)
                pq.push(sec);
        }
        if (pq.size() > 0)
        {
            if (pq.top() % 2)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << ans << endl;
            }
        }
        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}