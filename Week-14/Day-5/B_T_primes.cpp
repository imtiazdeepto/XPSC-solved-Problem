//
#include<bits/stdc++.h>
#include<iostream>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define ImtiazDeepto cout.tie(NULL);
using namespace std;
#define tc int x;cin >> x;while (x--)
#define yes cout << "YES"<< endl
#define no cout << "NO" << endl
#define all(x) (x).begin(), (x).end()
#define int long long
const int MAX = 1e6 + 5;
vector<bool> is_prime(MAX, true);

void sieve_eratosthenes() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MAX; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAX; j += i) {
                is_prime[j] = false;
            }
        }
    }
}
signed main(){	
    Code By ImtiazDeepto
    
    sieve_eratosthenes();

    tc
 {
        long long x;
        cin >> x;

        long long root = sqrt(x);
        if (root * root == x && is_prime[root]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    
    return 0;
}