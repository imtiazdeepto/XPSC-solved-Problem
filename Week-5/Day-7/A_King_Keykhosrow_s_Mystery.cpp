//
//Solved at:
#include<bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define all(x)  (x).begin(), (x).end()
#define int long long
#define tc int x; cin >> x; while (x--)
const int N=1e8;
int gcd(int a,  int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
signed main(){

Code By ImtiazDeepto
tc{
    int a,b;
    cin >> a>>b;
    cout << lcm(a,b) << endl;
}


return 0;
}