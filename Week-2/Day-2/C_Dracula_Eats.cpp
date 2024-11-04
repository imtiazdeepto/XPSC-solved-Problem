// Practice contest
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
    int d;
    cin>>d;
    int ans=2;
    int count=0;
    while(ans<=d){
        count++;
        ans+=7;
    }
    cout<<count<<endl;
}

return 0;
}