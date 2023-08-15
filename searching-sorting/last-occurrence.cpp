#include <iostream>
#include <vector>
using namespace std;

int lastOccurrence(vector<int> arr, int target) {
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int foundPosition = -1;

    while(start <= end) {
        int element = arr[mid];

        if(element == target) {
            foundPosition = mid;
            start = mid + 1;    // tricky
        } else if(target < element) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return foundPosition;
}

int main() {
    vector<int> arr {1, 3, 4, 4, 4, 4, 6, 6, 7, 7, 9};

    int ans = lastOccurrence(arr, 7);

    if(ans) {
        cout << "Element found at " << ans << " index";
    } else {
        cout << "Element not found!";
    }

    return 0;
}