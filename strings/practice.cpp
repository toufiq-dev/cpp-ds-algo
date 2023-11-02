#include <iostream>
#include <vector>
using namespace std;

void removeEven(vector<int> &nums) {
    int left = 0;
    int right = nums.size() - 1;
    int count = 0;

    while(left < right) {
        if(nums[left] & 1) left++;
        else {
            if(nums[right] & 1) {
                swap(nums[right], nums[left]);
                right--;
                left++;
                count++;
            } else {
                right--;
            }
        }
    }

    cout << count;

    // for(int i = 0; i < count; i++) {
    //     nums.pop_back();
    // }

    // for(auto x : nums) {
    //     cout << x << " ";
    // }
}

int main() {
    vector<int> arr = {1, 2, 4, 5, 10, 6, 3};

    removeEven(arr);

    // for (auto x : arr) {
    //     cout << x << " ";
    // }

    return 0;
}
