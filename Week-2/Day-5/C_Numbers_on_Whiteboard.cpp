//https://codeforces.com/problemset/problem/1430/C
//Solved at: Nov/07/2024 01:45UTC+6
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
    int n;
    cin>>n;
    priority_queue<int> pq;
    for(int i=1; i<=n; i++){
        pq.push(i);
    }
    vector<pair<int, int>>v;
    while(pq.size()>1){
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        v.push_back({a,b});
        int n=ceil((a+b)/2.0);
        pq.push(n);
    }
    cout<<pq.top()<<endl;
    for(auto el:v){
        cout<<el.first<<" "<<el.second<<endl;
    }
}

return 0;
}