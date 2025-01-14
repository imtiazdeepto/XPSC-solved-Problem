//https://cses.fi/problemset/task/1713/
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
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define all(x) (x).begin(), (x).end()
#define int long long

signed main()
{
    Code By ImtiazDeepto
        vector<int> div(1e6+7);
        // O(nloglog(n))
        for(int i=1;i<=1e6+7;i++){
            for(int j=i;j<=1e6+7;j+=i){
                div[j]++;
            }
        }
        tc{
            int n;
            cin>>n;
            cout<<div[n]<<endl;
        }
    

        return 0;
    
}