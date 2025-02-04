//ACM contest
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
template <class T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class T>
using pbds_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;



int main()
{
    // file();

    
        int n;
        cin >> n;
        vector<int> v(n), v2(n);
        for (int &el : v)
            cin >> el;
        sort(v.rbegin(),v.rend());
        int i=0,j=i+1,k=i+2;
        while(k<n){
            if(v[j]+v[k]>v[i]){
                cout<<"YES"<<endl;
                return 0;
            }else{
                i++;
                j++;k++;
            }
        }
        cout<<"NO"<<endl;

    
}