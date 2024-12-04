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
    int n,k;
    cin >> n >> k;
    
    int ans=n/2 +(n%2);
    if (ans>=k){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
  
}

return 0;
}