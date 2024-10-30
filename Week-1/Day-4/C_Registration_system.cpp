//https://codeforces.com/contest/4/problem/C
//Solved at: Oct/30/2024 19:19UTC+6
#include<bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);

using namespace std;
#define int long long
const int N=1e8;

signed main(){

Code By ImtiazDeepto

int test;
cin >> test;
map<string,int>mp;
while (test--)
{
    string str;
    cin >> str;
 
    if (mp[str])
    {
        cout << str << mp[str] << endl;
        mp[str]++;
    }
    else
    {
        cout << "OK\n";
        mp[str] = 1;
    }
}


return 0;
}