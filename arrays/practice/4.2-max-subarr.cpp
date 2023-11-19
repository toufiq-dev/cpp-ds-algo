#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public: 
    // brute force solution
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
    // }x

    // Observation 1: Every idx could be the final idx
    // Observation 2: the maximum subarray ending at a given index, 
    // formula from the observation: currentSum = max(0, currentSum) + nums[i], maxSum = first element 
    int maxSubArray(vector<int> &nums) {
        int maxSum = nums[0];
        int currentSum = 0;

        for (int i = 0; i < nums.size(); ++i) {
            currentSum = max(0, currentSum) + nums[i];
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
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