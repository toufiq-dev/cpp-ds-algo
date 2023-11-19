#include <iostream>
#include <vector>
using namespace std;

// TC: Linear, resize is also linear
// SC: constant
void removeOdd(vector<int> &nums) {
    int pt1 = 0, pt2 = nums.size() - 1;

    while (pt1 < pt2) {
        if (!(nums[pt1] & 1)) ++pt1;
        else {
            if (!(nums[pt2] & 1)) {
                swap(nums[pt1], nums[pt2]);
                ++pt1, --pt2;
            } 
            else {
                --pt2;
            }
        }
    }

    nums.erase(nums.begin() + pt1, nums.end());
}

int main() {
    vector<int> arr = {2, 1, 4, 3, 6, 5, 6, 2};

    removeOdd(arr);

    for (auto x : arr) {
        cout << x << " ";
    }

    return 0;
}


/*
    problem statement: remove odd integers from an array

    Intuition: Efficiently move odd integers to the end of the array 
    while maintaining the relative order of the even integers

    bitwise and(&) can be used to determine if an integer is even or odd
    Performing a bitwise AND operation with an odd number and 1 always results in 1.
    Because the LSB of an odd number is always 1.
*/