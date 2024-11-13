//https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
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

    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int i=0,j=0;
    int sum=0;
    int ans=INT_MIN;
    while(j<n){
        sum+=a[j];
         if(j-i+1==k){
            ans=max(ans,sum);
            sum-=a[i];
            i++;
        }
        j++;
    }
    cout<<ans<<endl;


return 0;
}