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
    int n;
    cin >> n;
    map<int,int>mp;
    for(int i=1; i<=n; i++){
        int x ;cin >> x;
        mp[x] =i;
    }
    int sum = 0;
    for(auto el:mp){
        sum+=el.second;
    }
    cout<<sum<<endl;

}

return 0;
}