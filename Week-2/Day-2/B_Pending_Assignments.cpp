//Practice contest
//Solved at:
#include<bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define int long long
const int N=1e8;

signed main(){

Code By ImtiazDeepto

int t;
cin>>t;
while(t--){
    int x,y,d;
    cin>>x>>y>>d;
    int ans=x*y;
    int day=d*24*60;
    if(ans<=day){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

return 0;
}