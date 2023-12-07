#include <iostream>
#include <vector>
using namespace std;

// Top-Down (Memoization) Approach
int fib(int n, vector<int>& memo) {
    if (n <= 1) return n;
    if (memo[n] != -1) return memo[n];
    
    memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
    return memo[n];
}

// Bottom-Up (Tabulation) Approach
// int fib(int n) {
//     vector<int> dp(n + 1, 0);
//     dp[1] = 1;

//     for (int i = 2; i <= n; ++i)
//         dp[i] = dp[i - 1] + dp[i - 2];

//     return dp[n];
// }

int main() {
    // Test Top-Down (Memoization) Approach
    int n_memo = 10;
    vector<int> memo(n_memo + 1, -1);

    cout << "Top-Down Approach: " << fib(n_memo, memo) << endl;

    // Test Bottom-Up (Tabulation) Approach
    // int n_tabulation = 10;

    // cout << "Bottom-Up Approach: " << fib(n_tabulation) << endl;

    return 0;
}
