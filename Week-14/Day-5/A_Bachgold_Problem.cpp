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
int n;
cin >> n;
if(n%2==0){
    cout<<n/2<<endl;
    for(int i=0; i<n/2;i++)
        cout<<2<<" ";
    cout<<endl;
}else{
    cout<<n/2<<endl;
    for(int i=0; i<(n/2)-1;i++)
        cout<<2<<" ";
    cout<<3<<endl;
}


return 0;
}