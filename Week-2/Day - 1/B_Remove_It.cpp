//https://atcoder.jp/contests/abc191/tasks/abc191_b?lang=en
//Solved at:2024-11-02 8:11:22 
#include<bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define int long long
const int N=1e8;

signed main(){

Code By ImtiazDeepto

    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n;i++)
        if(v[i]!=x)
            cout<<v[i]<<" ";
    cout<<endl;

return 0;
}