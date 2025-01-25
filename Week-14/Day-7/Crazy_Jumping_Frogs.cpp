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
        int n;
        cin >> n;
        int odd=0;
        int Y=n;
        while (Y--)
        {
            int x;cin >> x;
            if((x&1))odd++;
        }
        cout << max(odd,n-odd) << endl;
        
    }
    
    return 0;
}