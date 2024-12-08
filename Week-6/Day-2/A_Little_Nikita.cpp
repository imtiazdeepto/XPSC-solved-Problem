//
//Solved at:
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define tc int x; cin >> x; while (x--)
signed main(){


tc{

    int x,y;

    cin >> x >> y;
    if(x>=y and x%2 == y%2){
        cout << "yes" << endl;
    }
    
    else{
        cout << "NO" << endl;
    }
}
 

return 0;
}