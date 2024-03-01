class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSubarr = nums[0];
        int maxSubarr = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            currSubarr = max(nums[i], currSubarr + nums[i]);
            maxSubarr = max(maxSubarr, currSubarr);
        }

        return maxSubarr;
    }
};;