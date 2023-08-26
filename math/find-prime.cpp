#include <iostream>
#include <vector>
using namespace std;

vector<bool> sieve(int n) {
    // create a sieve array of size N
    vector<bool> prime(n, true);
    prime[0] = prime[1] = false;

    for(int i = 2; i < n; i++) {
        if(prime[i]) {
            int j = i * 2;

            while(j < n) {
                prime[j] = false;
                j += i;
            }
        }
    }

    return prime;
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