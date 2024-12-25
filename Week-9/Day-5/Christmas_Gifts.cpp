//
//Solved at:
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
    int h,l,w;  
    cin >> h>>l>>w;
    int area=2*(h*l+h*w+l*w);
    // cout << area << endl;
     cout<<1000/area<<endl;
}

return 0;
}