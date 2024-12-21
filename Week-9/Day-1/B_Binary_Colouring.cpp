//
//Solved at:
#include<bits/stdc++.h>
#include<iostream>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define tc int x;cin >> x;while (x--)
#define all(x) (x).begin(), (x).end()
#define int long long
signed main(){	
    Code By ImtiazDeepto
    
    tc{
        int n;cin >> n;
        vector<int> a;
        //decimal to binary
        while(n){
            if(n%2==0)a.push_back(0);
            else a.push_back(1);
            n /= 2;
        }a.push_back(0);
        for(int i=0; i<a.size()-1;++i){
            if(a[i]==1 && a[i+1]==1){
                for(int j=i; j<a.size();++j){
                    if(a[j]==0){
                        a[j]=1;
                        a[i]= -1;
                        break;
                    }else{
                        a[j]=0;
                    }
                }
            }
        }
        
        cout<<a.size()<<endl;
        for(int i=0; i<a.size(); i++){
            cout << a[i]<<" ";

        }cout<<"\n";

    }
    
    return 0;
}