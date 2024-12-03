//https://codeforces.com/problemset/problem/1977/A
//Solved at:Dec/03/2024 02:11UTC+6
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
    int x,y;
    cin >> x >> y;
    if(x>=y and x%2==y%2){
        cout << "yEs" << endl;
    }
    
    else{
        cout << "NO" << endl;
    }
}

return 0;
}