#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

class Solution {
public:
    double avgOfSubarrk(vector<int>& nums, int k) {
       vector<int> arr;
        double sum = 0;
        int min = INT_MIN;

        for(int i = 0; i < k; i++) {
            sum += nums[i];
        }

        for(int i = 0; i < nums.size() - k; i++) {
            double avg = sum / k;
            arr.push_back(avg);

            sum -= nums[i];
            sum += nums[k + i];
        }

        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] > min) {
                min = arr[i];
            }
        }

        return min;
       
    }
};

int main() {
    vector<int> arr = {1, 3, 2, 6, -1, 4, 1, 8, 2};
    int k = 5;

    Solution sln;
    double ans = sln.avgOfSubarrk(arr, k);

    cout << ans;

    return 0;
}
