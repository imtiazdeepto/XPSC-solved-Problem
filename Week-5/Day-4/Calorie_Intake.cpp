// https://www.codechef.com/problems/CALINTAKE
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a - (b * c)) > 0)
        cout << (a - (b * c)) << endl;
    else
        cout << -1 << endl;
}
