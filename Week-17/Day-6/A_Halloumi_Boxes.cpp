/*
  In the name of Allah, The Most Gracious and The Most Merciful.
*/
#include<bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
#define all(x)  (x).begin(), (x).end()
#define int long long
#define tc int x; cin >> x; while (x--)
const int N=1e8;
signed main(){

Code By ImtiazDeepto

tc{
    int n,k;
    cin>>n>>k;
    vector<int> a(n+1),v(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    v=a;
    sort(all(v));
    if(v==a){
        yes;
    }else if(k>=2){
        yes;
    }else{
        no;
    }

}

return 0;
}