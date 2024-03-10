#include <bits/stdc++.h>
using namespace std;

vector<int> spiral(vector<vector<int>>& nums) {
    int startRow = 0, startCol = 0, endRow = nums.size() - 1, endCol = nums[0].size() - 1;
    int total = nums.size() * nums[0].size(), count = 0;
    vector<int> ans;

    // startRow <= endRow && startCol <= endCol
    while (count < total) {
        // starting row
        for (int i = startCol; i <= endCol && count < total; i++) {
            ans.push_back(nums[startRow][i]);
            count++;
        }
        startRow++;

        // ending col
        for (int i = startRow; i <= endRow && count < total; i++) {
            ans.push_back(nums[i][endCol]);
            count++;
        }
        endCol--;

        // ending row
        for (int i = endCol; i >= startCol && count < total; i--) {
            ans.push_back(nums[endRow][i]);
            count++;
        }
        endRow--;

        // starting col
        for (int i = endRow; i >= startRow && count < total; i--) {
            ans.push_back(nums[i][startCol]);
        }
        startCol++;
    }

    return ans;
}

int main() {
    vector<vector<int>> arr = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };

    vector<int> ans = spiral(arr);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}