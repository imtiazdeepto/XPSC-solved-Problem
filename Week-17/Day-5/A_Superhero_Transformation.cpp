/*
  In the name of Allah, The Most Gracious and The Most Merciful.
*/
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
using namespace std;
#define all(x) (x).begin(), (x).end()
#define int long long
#define tc    \
    int x;    \
    cin >> x; \
    while (x--)
const int N = 1e8;
bool is_vowel(char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return true;
    }
    return false;
}
bool is_cons(char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return false;
    }
    return true;
}
signed main() {
    Code By ImtiazDeepto

        string s1,
        s2;
    cin >> s1 >> s2;
    if (s1.size() != s2.size()) {
        no;
        return 0;
    }
    for (int i = 0; i < s1.size(); i++) {
        if (is_vowel(s1[i]) and is_vowel(s2[i]) || is_cons(s1[i]) and is_cons(s2[i])) {
            continue;
        } else {
            no;
            return 0;
        }
    }
    yes;

    return 0;
}