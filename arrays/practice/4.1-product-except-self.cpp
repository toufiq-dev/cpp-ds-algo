#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums) {
    vector<int> ans (nums.size(), 1);

    int leftProduct = 1;
    for (int i = 0; i < nums.size(); i++) {
        ans[i] *= leftProduct;
        leftProduct *= nums[i];
    }

    int rightProduct = 1;
    for (int i = nums.size() - 1; i >= 0; i--) {
        ans[i] *= rightProduct;
        rightProduct *= nums[i];
    }

    return ans;
}

int main() {
    vector<int> arr {3, 4, 1, 2};

    vector<int> ans = productExceptSelf(arr);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}

/*
    Given an array we have to implement a function that will return an array 
    so that each index has a product of all members present in the array except 
    the member stored at that index. 
    example: [1, 2, 3, 4] will return [24, 12, 8, 6]

    Intuition: We iterate through the array from 0 ~ n-1 and store the rightmost 
    product for each array member and then we again traverse the array from n-1 to 0 
    and this time store the leftmost product for each array member it will eventually 
    calculate product of all members except self.
*/