<<<<<<< Tabnine <<<<<<<
//https://www.codechef.com/problems/P4149//-
// Solved at: 14 nov 2024 8:48 pm//-
#include <bits/stdc++.h>//-
#define Code ios_base::sync_with_stdio(false);//-
#define By cin.tie(NULL);//-
#define ImtiazDeepto cout.tie(NULL);//-
using namespace std;//-
#define all(x) (x).begin(), (x).end()//-
#define int long long//-
#define tc    \//-
    int x;    \//-
    cin >> x; \//-
    while (x--)//-
const int N = 1e8;//-
/**//+
 * @brief Main function to solve the problem of maximizing the sum of an array.//+
 *        The problem is to find the maximum sum of an array by removing at most one negative number.//+
 *        If there are no negative numbers, the sum remains the same.//+
 *        If there is an odd number of negative numbers, the sum is reduced by twice the absolute value of the smallest negative number.//+
 *        If there is an even number of negative numbers, the sum remains the same.//+
 *//+
 * @return int 0 to indicate successful program execution.//+
 *///+
signed main()
{

    Code By ImtiazDeepto

        tc
    {
        int n, negCount = 0, sum = 0;
        cin >> n;
        int minneg = LONG_LONG_MAX;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] < 0)
            {
                negCount++;
            }
            sum += abs(v[i]);
            minneg = min(minneg, abs(v[i]));
        }
        // cout<<"MINNEG: "<<minneg<<endl;
        // cout<<"NEGcount: "<<negCount<<endl;
        // cout<<"sum: "<<sum<<endl;
        if (negCount == 0)
        {
            cout << sum << endl;
        }
        else if (negCount % 2 == 0)
        {
            cout << sum << endl;
        }
        else if (negCount % 2 != 0)

        {
            cout << sum - 2 * minneg << endl;
        }
    }

    return 0;
}
>>>>>>> Tabnine >>>>>>>// {"conversationId":"41457bba-0956-4c06-a8b1-9ffad8e6e216","source":"instruct"}