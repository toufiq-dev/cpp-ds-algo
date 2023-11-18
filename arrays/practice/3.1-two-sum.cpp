#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> seen;

    for (int i = 0; i < nums.size(); i++) {
        if (seen.count(target - nums[i])) 
            return {seen[target - nums[i]], i};
            
        seen[nums[i]] = i;
    }

    return {-1, -1};
}

int main() {
    vector<int> arr = {1, 21, 3, 14, 5, 60, 7, 6};
    int value = 81;
    
    vector<int> ans = twoSum(arr, value);

    for (auto x : ans) {
        cout << x << " ";
    }

    return 0;
}

/*
    Find two numbers that add upto a value

    Intution: take a map and traverse the array, in each iteration check if there is a value which
    satisfy the condition.
    store each member of the vector in the map.
*/