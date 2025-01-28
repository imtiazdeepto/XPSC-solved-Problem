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
    int h,a,b;
    cin>>h>>a>>b;
    int x=a,y=b,z=h;
    z-=(10*b);
    if(z<=0){
        cout<<"YES"<<endl;
        continue;
    }
    for(int i=0;i<a;i++){
        h=(h/2)+10;
        z=(z/2)+10;
       
    }
    if(h<=0){
        cout<<"YES"<<endl;
        continue;
    }
    
    h-=(10*b);
    if(h<=0 || z<=0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

return 0;
}