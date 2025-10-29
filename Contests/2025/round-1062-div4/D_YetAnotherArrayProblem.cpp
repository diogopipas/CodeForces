#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        // list of small primes to test
        vector<int> primes = {
            2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47,
            53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107,
            109, 113, 127, 131, 137, 139, 149, 151
        };

        for (int p : primes) {
            // check if there exists an element not divisible by p
            if (any_of(a.begin(), a.end(), [p](long long x) { return x % p != 0; })) {
                cout << p << '\n';
                goto next_case; // go to next test case
            }
        }

        // if none of the primes worked
        cout << -1 << '\n';

        next_case:;
    }
}