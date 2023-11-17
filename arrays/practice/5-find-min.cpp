#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMin(vector<int> &nums) {
    int mini = nums[0];
    for (int i = 1; i < nums.size(); ++i)
        mini = min(mini, nums[i]);

    return mini;
}

int main() {
    vector<int> arr = {9, 2, 3, 1, 6};

    int ans = findMin(arr);

    cout << ans;

    return 0;
}