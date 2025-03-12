#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    if (A + B > C and B + C > A and A + C > B) {
        cout << "YES" << endl;

    } else {
        cout << "NO" << endl;
    }
}