//https://www.geeksforgeeks.org/problems/longest-k-uniqe-characters-substring0853/1
// Solved at: 02:05 Am 21 Nov 2024
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define all(x) (x).begin(), (x).end()
#define int long long
#define tc    \
    int x;    \
    cin >> x; \
    while (x--)
const int N = 1e8;

signed main()
{

    Code By ImtiazDeepto

        int k;
    cin >> k;
    string str;
    cin >> str;
    map<char, int> mp;
    int n = str.size();
    int l = 0, r = 0, ans = -1;

    while (r < n)
    {
        mp[str[r]]++;
        if (mp.size() == k)
        {
            ans = max(ans, r - l + 1);
        }
        else
        {
            while (mp.size() > k and l <= r)
            {
                mp[str[l]]--;
                if (mp[str[l]] == 0)
                    mp.erase(str[l]);
                l++;
            }
        }
        r++;
    }
    cout << ans << endl;

    return 0;
}