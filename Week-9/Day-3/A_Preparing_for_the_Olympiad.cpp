//
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
const int N = 1e8;

signed main()
{

    Code By ImtiazDeepto

        tc
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        vector<int> v2;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v2.push_back(x);
        }
        int sum1 = v[n-1];
        int sum2 = 0;
      
        for (int i = 0; i <n-1; i++)
        {
            if(v[i] >v2[i+1]){
                sum1+=v[i];
                sum2+=v2[i+1];
            }
        }
        cout<<sum1-sum2<<endl;
    }

    return 0;
}