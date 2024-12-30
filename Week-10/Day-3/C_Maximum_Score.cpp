//
// Solved at:
#include <bits/stdc++.h>
#include <iostream>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define tc    \
    int x;    \
    cin >> x; \
    while (x--)
#define all(x) (x).begin(), (x).end()
#define int long long
signed main()
{
    Code By ImtiazDeepto

        tc
    {
        int n;
        cin >> n;
        int zero=0,one=0;
        for (int i = 0; i < n; i++)
        {
            int a;cin>>a;
            if(a==0)zero++;
            else one++;
            
        }
        cout<<min(zero,one)<<endl;
       
    }

    return 0;
}