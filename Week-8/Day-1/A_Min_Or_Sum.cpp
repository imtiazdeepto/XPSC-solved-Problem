#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int x;
        cin>>x;
        int ans=0;
        for(int i=0;i<x;i++){
            int n;cin>>n;
            ans=(ans|n);
        }
        cout<<ans<<endl;
    }
}