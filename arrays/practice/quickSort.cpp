#include <iostream>
#include <vector>
using namespace std;

int partition (vector<int>& nums, int L, int R) {
    int i = L - 1;
    for (int j = L; j < R; j++) {
        if (nums[j] < nums[R]) {
            i++;
            swap(nums[j], nums[i]);
        }
    }

    swap(nums[i + 1], nums[R]);
    return i + 1;
}

void quickSort (vector<int>& nums, int L, int R) {
    if (L < R) {
        int pivot = partition(nums, L, R);
        quickSort(nums, L, pivot - 1);
        quickSort(nums, pivot + 1, R);
    }
}

int main () {
    vector<int> arr = {3, 5, 9, 1, 2, 4, 10, 0, 6};

    quickSort(arr, 0, arr.size() - 1);

    for (auto x : arr) {
        cout << x << " ";
    }

    return 0;
}