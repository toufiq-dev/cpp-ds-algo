#include <iostream>
#include <vector>
using namespace std;

// TC: Linear O(|nums|), no resize needed
// SC: constant
void removeEven(vector<int> &nums) {
  int writeIdx = 0; // Stores the index for writing odd numbers

  for (int i = 0; i < nums.size(); ++i) {
    if (nums[i] & 1) { // Odd number (LSB is 1)
      if (writeIdx != i) { // Avoid unnecessary swaps for already odd numbers
        swap(nums[writeIdx], nums[i]);
      }
      ++writeIdx; // Increment write index for next odd number
    }
  }

  // Truncate the array by erasing even numbers at the end
  nums.erase(nums.begin() + writeIdx, nums.end());
}

int main () {
    vector<int> arr = {2, 1, 4, 3, 6, 5, 6, 2};

    removeEven(arr);

    for (auto x : arr) {
        cout << x << " ";
    }

    return 0;
}


/*
    problem statement: remove even integers from an array

    Intuition: Efficiently move even integers to the end of the array 
    while maintaining the relative order of the odd integers

    bitwise and(&) can be used to determine if an integer is even or odd
    Performing a bitwise AND operation with an odd number and 1 always results in 1.
    Because the LSB of an odd number is always 1.
*/