#include <iostream>
#include <vector>
using namespace std;

int findMissing(vector<int> arr) {
    int start = 0;
    int end = arr.size() - 1;  // Subtract 1 to avoid out-of-bounds access
    int mid;

    while (start <= end) {
        mid = start + (end - start) / 2;

        if (arr[mid + 1] - arr[mid] != 1) {
            return arr[mid] + 1;
        } else if (arr[mid] - arr[start] != mid - start) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return -1;  // Return a value to handle cases where there is no missing element
}

int main() {
    // vector<int> arr {1, 3, 4, 5, 6, 7, 8};
    // vector<int> arr {1, 2, 3, 4, 5, 6, 8};
    vector<int> arr {2, 3, 4, 5, 6, 7, 9};

    int ans = findMissing(arr);

    if (ans != -1) {
        cout << "Missing is: " << ans;
    } else {
        cout << "No missing element found.";
    }

    return 0;
}
