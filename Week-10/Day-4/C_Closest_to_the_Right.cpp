//https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C
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
int binary_search(vector<int> &v, int x)
{
    int start = 0, end = v.size() - 1;
    int ans = end+1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (v[mid] >= x)
        {
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return ans;
}
signed main(){	
    Code By ImtiazDeepto
    
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;


    while (q--)
    {
        int l;
        cin >> l;
        cout << binary_search(v, l) + 1 << endl;
    }
    return 0;
}