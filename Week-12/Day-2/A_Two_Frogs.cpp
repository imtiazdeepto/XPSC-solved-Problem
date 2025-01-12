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
signed main(){	
    Code By ImtiazDeepto
    
    tc{
        int n,a,b;
        cin>>n>>a>>b;
        int ans=abs(b-a);
        if(!(ans%2))yes;
        else no;
    }
    
    return 0;
}