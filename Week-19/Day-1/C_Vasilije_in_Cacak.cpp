/*
  In the name of Allah, The Most Gracious and The Most Merciful.
*/
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;
#define all(x) (x).begin(), (x).end()
#define int long long
#define tc    \
    int x;    \
    cin >> x; \
    while (x--)
const int N = 1e8;

void solve() {
    int n,k,x;
    cin>>n>>k>>x;
    int sum=n*(n+1)/2;
    int sum1=k*(k+1)/2;
    int r=n-k;
    int sum2=sum-(r*(r+1)/2);
    // cout<<sum<<" "<<sum1<<" "<<sum2<<endl;
    if(x>=sum1 and x<=sum2){
        yes;
    }else{
        no;
    }
    
}
    
signed main() {
    Code By ImtiazDeepto

        tc {
        solve();
    }

    return 0;
}