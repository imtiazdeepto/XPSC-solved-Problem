//
//Solved at:
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

tc{
    int n;
        cin >> n;
        int coins = 0;
        while (n > 3)
        {
            coins++;
            n=floor(n/4.0);
        }
        cout << (1<<coins) << endl;
}

return 0;
}