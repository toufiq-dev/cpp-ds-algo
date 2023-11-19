#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public: 
    // naive solution
    // int maxSubArray(vector<int> &nums) {
    //     int maxSum = nums[0];
    //     for (int i = 0; i < nums.size(); ++i) {
    //         int currentSum = 0;
    //         for (int j = i; j < nums.size(); ++j) {
    //             currentSum += nums[j];
    //             maxSum = max(maxSum, currentSum);
    //         }
    //     }

    //     return maxSum;
    // }

    int maxSubArray(vector<int> &nums) {
        
    }
};

int main () {
    vector<int> arr = {5,4,-1,7,8};

    Solution *sln = new Solution();

    int ans = sln->maxSubArray(arr);

    cout << ans; 

    return 0;
}

/*
    Problem 53: Maximum Subarray
    Given an integer array nums, find the subarray with the largest sum, and return its sum.

    Example 1:
    Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
    Output: 6
    Explanation: The subarray [4,-1,2,1] has the largest sum 6.

    Example 2:
    Input: nums = [5,4,-1,7,8]
    Output: 23
    Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
*/