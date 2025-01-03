//https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D
//Solved at:
#include<bits/stdc++.h>
#include<iostream>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define tc int x;cin >> x;while (x--)
#define all(x) (x).begin(), (x).end()
#define int long long

    
signed main(){	
    Code By ImtiazDeepto

    int n;
    cin>>n;
    vector<int>v(n);
    for(int &i:v)cin>>i;
    sort(all(v));
    tc{
        int l,r;
    cin>>l>>r;
    auto low=lower_bound(v.begin(),v.end(),l);
    auto high=upper_bound(v.begin(),v.end(),r);
    int ans=high-low;
    cout<<ans<<" ";
    }
    
    return 0;
}