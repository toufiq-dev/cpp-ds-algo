#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public: 
    vector<vector<int>> threeSum(vector<int> &nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); ++i) {
            int num = nums[i];
            int L = i + 1;
            int R = nums.size() - 1;
            int target = -num;

            while (L < R) {
                if (nums[L] + nums[R] < target) ++L;
                else if (nums[L] + nums[R] > target) --R;
                else {
                    while (L < R and nums[L] == nums[L + 1]) ++L;
                    while (L < R - 1 and nums[R] == nums[R - 1]) --R;
                    result.push_back({num, nums[L], nums[R]});
                    ++L;
                    --R;
                }
            }

            while (i + 1 < nums.size() and nums[i] == nums[i + 1]) ++i;
        }

        return result;
    }
};

int main() {
    vector<int> arr = {-1,0,1,2,-1,-4};

    Solution *sln = new Solution();
    vector<vector<int>> ans = sln -> threeSum(arr);

    for (int i = 0; i < ans.size(); ++i) {
        for (int j = 0; j < ans[i].size(); ++j) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
    Given an integer array nums, return all the triplets
    [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, 
    and nums[i] + nums[j] + nums[k] == 0.

    Notice that the solution set must not contain duplicate triplets.

    Example 1:
    Input: nums = [-1,0,1,2,-1,-4]
    Output: [[-1,-1,2],[-1,0,1]]
    Explanation: 
    nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
    nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
    nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
    The distinct triplets are [-1,0,1] and [-1,-1,2].
    Notice that the order of the output and the order of the triplets does not matter.

*/