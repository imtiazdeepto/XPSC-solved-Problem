#include<bits/stdc++.h>
using namespace std;

using LL = long long;

void solve()
{
    LL l, r;
    cin >> l >> r;
  
    LL diff_msb = 63 - __builtin_clzll(l ^ r);
    LL a = (((l & r) >> diff_msb) << diff_msb) + (1LL << diff_msb);
    LL b = a - 1;

    LL c;
    if(b > l)
        c = b - 1;
    else
        c = a + 1;
    
    cout << a << " " << b << " " << c << "\n";
}
int main()
{
    
    int T;
    cin >> T;
    while(T--)
        solve();
}