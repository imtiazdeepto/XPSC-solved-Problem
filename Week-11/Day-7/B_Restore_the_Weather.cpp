//
#include <bits/stdc++.h>
#include <iostream>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define tc    \
    int x;    \
    cin >> x; \
    while (x--)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define all(x) (x).begin(), (x).end()
#define int long long
signed main()
{
    Code By ImtiazDeepto tc
    {
        int n, k;
        cin >> n >> k;
        vector<pair< int, int > > v(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v[i].first = x;
            v[i].second = i;
        }
        sort(all(v));
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        // for(int i = 0; i < n; i++)cout << arr[i] <<" ";
        // cout << endl;
        // int ans = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     cout<< v[i].first << " -- "<< v[i].second<<endl;
        // }
         int ans[n];
        for(int i=0; i<n; i++){
            ans[v[i].second]=arr[i];
        }
        for(int i=0; i<n; i++){
            cout << ans[i] << ' ';
        }
        cout << endl;
    }

    return 0;
}