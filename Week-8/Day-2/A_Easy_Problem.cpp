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

tc
{
    int n;
    cin >> n;
    int ans =0;
    for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
            if(i+j==n)ans++;
        }
    }
    cout<<ans<<endl;
}

return 0;
}