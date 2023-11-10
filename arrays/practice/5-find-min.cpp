#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMin(vector<int> &nums) {
    int mini = nums[0];
    for(int &num : nums) {
        mini = min(mini, num);
    }

    return mini;
}

int main() {
    vector<int> arr = {9, 2, 3, 6};

    int ans = findMin(arr);

    cout << ans;

    return 0;
}