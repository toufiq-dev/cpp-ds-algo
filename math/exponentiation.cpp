#include <bits/stdc++.h>
using namespace std;

int exponentiation (int a, int b) {
    int ans = 1;

    while(b > 0) {
        // lsb of even is 0 and odd is 1
        // performing bitwise and gives the lsb
        if(b & 1) {
            ans = ans * a;
        }

        a = a * a;
        b >>= 1; // divide by 2
    }

    return ans;
}

int main() {
    // find exponentiation of interger.
    int a = 3, b = 4;

    int ans = exponentiation(a, b);

    cout << ans << endl;

    return 0;
}