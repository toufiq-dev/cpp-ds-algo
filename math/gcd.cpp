#include <bits/stdc++.h>
using namespace std;

int gcd (int x, int y) {
    if(x == 0) return y;

    if(y == 0) return x;

    while(x > 0 && y > 0) {
        if(x > y) {
            x = x - y;
        } else {
            y = y - x;
        }
    }

    return x == 0 ? y : x;
}

int main() {
    // given two positive integers A & B, find GCD of A and B.
    int a = 180, b = 378;

    int ans = gcd(a, b);

    cout << ans << endl;

    return 0;
}