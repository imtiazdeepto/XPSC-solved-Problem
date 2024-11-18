//https://www.codechef.com/problems/RCBCSK
//Solved at: 3:50 am on NOV 17 2024
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
int rcb,csk;
cin>>rcb>>csk;
    if(rcb-csk>=18)cout<<"RCB"<<endl;
    else
    cout<<"CSK"<<endl;


return 0;
}