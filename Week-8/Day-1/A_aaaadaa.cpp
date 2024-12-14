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
// You are given a string  S of length 
// N consisting of lowercase English letters, along with lowercase English letters 
// c1 and c2.
// Find the string obtained by replacing every character of 
// S that is not 
// c1 with c2

signed main(){

Code By ImtiazDeepto

int n;
cin >> n;
char c1,c2;
cin >> c1>>c2;
string s;
cin >> s;
for(int i=0;i<n;i++){
    if(s[i]==c1){
        cout << s[i];
    }else{
        cout<<c2;
    }
}

return 0;
}