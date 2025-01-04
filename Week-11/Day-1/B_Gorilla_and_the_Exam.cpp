//
#include<bits/stdc++.h>
#include<iostream>
#include<map>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define tc int x;cin >> x;while (x--)
#define yes cout << "YES"<< endl
#define no cout << "NO" << endl
#define all(x) (x).begin(), (x).end()
#define int long long
signed main(){	
    Code By ImtiazDeepto
    tc{
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        map<int, int> mp;
        for (int num : v) {
            mp[num]++;
        }

        vector<int> v2;
        for (auto it : mp) {
            v2.push_back(it.second);
        }

        sort(all(v2));

        int j = 0;
        for (int count : v2) {
            if (count > k) {
                break;
            }
            j++;
            k -= count;
        }

        int t = v2.size() - j;
        cout << max(1, t) << endl;
    }
    
    
    return 0;
}