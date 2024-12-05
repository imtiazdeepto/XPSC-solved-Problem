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
    int n,m;
    cin>>n>>m;
    int ans=0;
    while(n--){
        string s;
        cin>>s;
        int len=s.length();
        // cout<<"len="<<len<<endl;
        if(m>=len){
            ans++;
        }            m=m-len;

       
    }
    cout<<ans<<endl;

}

return 0;
}