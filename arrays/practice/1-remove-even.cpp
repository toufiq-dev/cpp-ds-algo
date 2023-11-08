#include <iostream>
#include <vector>
using namespace std;

// TC: Linear, resize is also linear
// SC: constant
void removeEven(vector<int> &nums) {
    int ptr1 = 0;
    int ptr2 = nums.size() - 1;

    while(ptr1 < ptr2) {
        if(nums[ptr1] & 1) ptr1++;
        else {
            if(nums[ptr2] & 1) {
                swap(nums[ptr2], nums[ptr1]);
                ptr2--;
                ptr1++;
            } else {
                ptr2--;
            }
        }
    }

    nums.erase(nums.begin() + ptr1, nums.end());
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

    Intution: Efficiently move even integers to the end of the array 
    while maintaining the relative order of the odd integers
*/