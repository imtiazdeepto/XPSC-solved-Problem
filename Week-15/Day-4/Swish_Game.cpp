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
    int a,b;
    cin >> a>>b;
    string s;
    cin >> s;int cnt=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='S'){
            cnt++;
        }
    }
    if(cnt>=b)cout<<a<<endl;
    else{
        cout<<a+(b-cnt-1)<<endl;
    }
}

return 0;
}