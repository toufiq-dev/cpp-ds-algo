#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target) {
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while(start <= end) {
        int element = arr[mid];

        if(element == target) {
            return mid;
        } else if(target < element) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }

        mid = start + (end - start) / 2; 
    }

    return -1;
}

int main() {
    vector<int> arr {2, 5, 7, 8, 9, 11, 12, 14, 19};

    int ans = binarySearch(arr, 11);

    if(ans) {
        cout << "Element found at " << ans << " index";
    } else {
        cout << "Element not found!";
    }

    return 0;
}

// mid = start + (end - start) / 2 instead of (start + end) / 2
// because of possible overflow, if start or end becomes 2^31 - 1