#include <bits/stdc++.h>
using namespace std;

vector<bool> sieve(int n) {
    vector<bool> isPrime (n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for(int i = 2; i * i <= n; i++) {
        if(isPrime[i]) {
            for(int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    return isPrime;
}

int main() {
    int n;

    cout << "Enter the number for range: ";
    cin >> n;

    vector<bool> ans = sieve(n);

    cout << "Prime numbers in the given range are: ";

    for(int i = 0; i < ans.size(); i++) {
        if(ans[i] == true) {
            cout << i << " ";
        }
    }
}