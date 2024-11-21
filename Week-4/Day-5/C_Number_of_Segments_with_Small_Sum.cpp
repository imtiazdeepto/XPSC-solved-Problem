//https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/C
//Solved at:Nov/19/2024 17:24UTC+6
#include<bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define all(x)  (x).begin(), (x).end()
#define int long long
#define tc int x; cin >> x; while (x--)
const int N=1e8;

signed main(){

Code By ImtiazDeepto

    int x,
        y;
    cin >> x >> y;
    vector<int> v(x);
    for (int i = 0; i < x; i++)
        cin >> v[i];
    int l = 0, r = 0, ans = 0, sum = 0;
    while (r < x)
    {
        sum += v[r];
        if (sum <= y)
        {
            ans += r - l + 1;
        }
        else
        {
            while (sum > y)
            {
                sum -= v[l];
                l++;
            }
            if (sum <= y)
            {
                ans += r - l + 1;
            }
        }r++;
    }
    cout<<ans<<endl;
 

return 0;
}