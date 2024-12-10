// https://www.codechef.com/problems/PALIXOR
// Solved at:
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
const int N = (1LL << 15);
vector<int> arr;

bool isPalindrome(int x)
{
    string num = to_string(x);
    int sz = num.length();
    for (int i = 0; i < sz / 2; i++)
    {
        if (num[i] != num[sz - i - 1])
        {
            return false;
        }
    }
    return true;
}
void precal()
{
    for (int i = 0; i < N; i++)
    {
        if (isPalindrome(i))
        {
            arr.push_back(i);
        }
    }
}

signed main()
{

    Code By ImtiazDeepto
        precal();

        tc
    {
        int n,ans=0;
        cin >> n;
        ans=n;
        vector<int> v(n),mp(N+1,0);
        for (auto i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < arr.size(); j++) 
            {
                int c = v[i] ^ arr[j];
                ans += mp[c];
            }
        }
        cout<<ans/2<<endl;
    }

    return 0;
}