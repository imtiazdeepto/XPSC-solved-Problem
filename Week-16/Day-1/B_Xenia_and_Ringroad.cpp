#include <bits/stdc++.h>
using namespace std;
#define int long long



void solve()
{
    int n,q;
    cin>>n>>q;
    vector<int>v;
    int x;cin>>x;
    v.push_back(x);
    for(int i=0;i<q-1;i++){
        int x;cin>>x;
        if(v.back()!=x)v.push_back(x);
    }
    int ans=0,now=1;
   for(int i=0;i<v.size();i++){
    if(now<v[i]){
        ans+=v[i]-now;
        now=v[i];
    }else if(now>v[i]){
        ans+=(n-now+1);
        now=1;
        if(now<v[i]){
        ans+=v[i]-now;
        now=v[i];
    }
    }
   }
   cout<<ans<<endl;
    
}


signed main()
{   
    solve();
}