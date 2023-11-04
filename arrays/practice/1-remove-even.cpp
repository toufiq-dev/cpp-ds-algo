#include <iostream>
#include <vector>
using namespace std;

// TC: Linear, resize is also linear
// SC: constant
void removeEven(vector<int> &nums) {
    int left = 0;
    int right = nums.size() - 1;

    while(left < right) {
        if(nums[left] & 1) left++;
        else {
            if(nums[right] & 1) {
                swap(nums[right], nums[left]);
                right--;
                left++;
            } else {
                right--;
            }
        }
    }

    nums.resize(left);
}

int main() {
    vector<int> arr = {2, 4, 3, 6, 5, 6, 2};

    removeEven(arr);

    for (auto x : arr) {
        cout << x << " ";
    }

    return 0;
}


/*

    problem statement: remove even integers from an array
*/