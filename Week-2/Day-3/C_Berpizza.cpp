//https://codeforces.com/problemset/problem/1468/C
// Solved at:Nov/05/2024 23:07UTC+6 
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define int long long
const int N = 1e8;

signed main()
{

    Code By ImtiazDeepto

        int n,
        customer = 1;
    cin >> n;
    set<pair<int, int>> s;
    multiset<pair<int, int>> ms;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            int money;
            cin >> money;
            s.insert({customer, money});
            ms.insert({money, -customer});
            customer++;
        }
        else if (choice == 2)
        {
            int pos = s.begin()->first, money = s.begin()->second;
            v.push_back(pos);
            s.erase(s.begin());
            ms.erase({money, -pos});
        }
        else
        {
            int pos = ms.rbegin()->second, money = ms.rbegin()->first;
            v.push_back(-pos);
            ms.erase(--ms.end());
            s.erase({-pos, money});
        }
    }
    for (auto el : v)
    {
        cout << el << " ";
    }
    return 0;
}