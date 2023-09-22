#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void simpleSieve(int limit, vector<int> &primes) {
    // Create a boolean array "mark" and initialize all entries as true.
    // A value in mark[i] will finally be false if i is Not a prime, else true.
    vector<bool> mark(limit + 1, true);

    for (int p = 2; p * p <= limit; ++p) {
        if (mark[p]) {
            // Mark all multiples of p as composite.
            for (int i = p * p; i <= limit; i += p) {
                mark[i] = false;
            }
        }
    }

    // Collect all prime numbers into the "primes" vector.
    for (int p = 2; p <= limit; ++p) {
        if (mark[p]) {
            primes.push_back(p);
        }
    }
}

void segmentedSieve(int L, int R) {
    // Compute the limit to be used for the sieve of Eratosthenes for the segment [L, R].
    int limit = static_cast<int>(sqrt(R)) + 1;

    // Find primes in the range [2, sqrt(R)] using the simple sieve.
    vector<int> primes;
    simpleSieve(limit, primes);

    // Create a boolean array "isPrime" for the range [L, R].
    int n = R - L + 1;
    vector<bool> isPrime(n, true);

    // Sieve the range [L, R] using primes found in [2, sqrt(R)].
    for (int p : primes) {
        // Find the smallest multiple of p that is greater than or equal to L.
        int start = max(p * p, (L + p - 1) / p * p);

        // Mark all multiples of p in the range [L, R] as composite.
        for (int i = start; i <= R; i += p) {
            isPrime[i - L] = false;
        }
    }

    // Print the prime numbers in the range [L, R].
    for (int i = 0; i < n; ++i) {
        if (isPrime[i]) {
            cout << (i + L) << " ";
        }
    }
    cout << endl;
}

int main() {
    int L, R;
    cout << "Enter the range [L, R]: ";
    cin >> L >> R;

    cout << "Prime numbers in the range [" << L << ", " << R << "] are:" << endl;
    segmentedSieve(L, R);

    return 0;
}
