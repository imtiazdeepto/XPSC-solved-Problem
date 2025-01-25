//
#include<bits/stdc++.h>
#include<iostream>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define tc int x;cin >> x;while (x--)
#define yes cout << "YES"<< endl
#define no cout << "NO" << endl
#define all(x) (x).begin(), (x).end()
#define int long long
bool isprime(long long n) {
    if (n<=1) return false;
    for (long long i= 2; i *i <=n;i++) {
        if (n%i==0) return false;
    }
    return true;
}
signed main(){	
    Code By ImtiazDeepto
    int n;cin >> n;
    vector<int> v;
    for(int i=2; i<=(n+1);i++){
        if(isprime(i))v.push_back(1);
        else v.push_back(2);
    }
    if(n<3)cout<<1<<endl;
    else cout<<2<<endl;
    for(int i=0;i<n;i++)cout<<v[i]<<" ";cout<<endl;
    
    return 0;
    
    
    return 0;
}