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
    string s;
    cin >> s;
    int ans=0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '1')ans++;
    }
    cout << ans << endl;
}

return 0;
}