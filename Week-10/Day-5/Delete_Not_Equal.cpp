#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int z=0,o=0;
    for(auto el:s){
        if(el=='0')z++;
        else
            o++;
    }
    if(z==n or o==n)cout<<n<<endl;
    else cout<<1<<endl;
    // else{
    //     cout<<min(o,z)<<endl;
    // }
    
}
int main() {
    int t;cin>>t;
    while(t--)solve();

}
