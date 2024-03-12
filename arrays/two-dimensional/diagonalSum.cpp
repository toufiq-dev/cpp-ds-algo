#include <bits/stdc++.h>
using namespace std;

// int diagonalSum(vector<vector<int>> nums) {
//     int sum = 0;

//     for (int i = 0; i < nums.size(); i++) {
//         for (int j = 0; j < nums[0].size(); j++) {
//             if (i == j) {
//                 sum += nums[i][j];
//             }
//             if (i + j == nums.size() - 1) {
//                 sum += nums[i][j];
//             }
//         }
//     }

//     return sum;
// }

int diagonalSum(vector<vector<int>> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i][i];

        if (i != nums.size() - 1 - i) {
            sum += nums[i][nums.size() - 1 - i];
        }
    }

    return sum;
}

int main () {
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
    };

    int ans = diagonalSum(arr);
    cout << ans;

    return 0;
}
