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
    int n,k,p;
    cin>>n>>k>>p;
    k=abs(k);
    int need=k/p;
    if(need>n or (need>=n and k%p)  ){
        cout<<-1<<endl;
    }else{
        cout<<need+(k%p!=0)<<endl;
    }

}

return 0;
}