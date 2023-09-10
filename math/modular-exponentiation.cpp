#include <bits/stdc++.h>
using namespace std;

long long int modularExponentiation (long long int a, long long int b, long long m) {
    long long int ans = 1;

    while(b > 0) {
        // lsb of even is 0 and odd is 1
        // performing bitwise and gives the lsb
        if(b & 1) {
            ans = (ans * a) % m;
        }

        a = (a * a) % m;
        b >>= 1; // divide by 2
    }

    return ans % m;
}

int main() {
    // find exponentiation of interger.
    long long int x = 2, n = 6, m = 10;

    long long int ans = modularExponentiation(x, n, m);

    cout << ans << endl;

    return 0;
}

// This is a geeksforgeeks problem

// the problem says: Given x, n and M, find (x^n) % M

// example: x = 3, n = 2, m = 4 ||| ans: 1
// example: x = 2, n = 6, m = 10 ||| ans: 4