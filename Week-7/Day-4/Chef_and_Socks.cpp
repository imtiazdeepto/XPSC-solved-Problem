//
//Solved at:
#include<bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define all(x)  (x).begin(), (x).end()
// #define int long long
#define tc int x; cin >> x; while (x--)
const int N=1e8;

signed main(){

Code By ImtiazDeepto

int x,y,z;
cin >> x >> y >> z;
int sum=y+z;
if (sum>=x){
    cout << "YES" << endl;
}
else{
    cout << "NO" << endl;
}

return 0;
}