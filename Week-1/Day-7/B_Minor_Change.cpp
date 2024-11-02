//https://atcoder.jp/contests/abc172/tasks/abc172_b?lang=en
//Solved at:
#include<bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define int long long
const int N=1e8;

signed main(){

Code By ImtiazDeepto

string str,str2;
cin>>str>>str2;
int count=0;
for(int i=0;i<str.size();i++)
    if(str[i]!=str2[i])
        count++;
cout<<count<<endl;

return 0;
}