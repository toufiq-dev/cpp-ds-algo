#include <iostream>
#include <vector>

using namespace std;

int findPeakElement(vector<int> arr) {
    int start = 0;
    int end = arr.size() - 1;

    while(start < end) {
        int mid = start + (end - start) / 2;

        if(arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }

    return end;
}

int main() {
    vector<int> arr {0, 1, 2, 5, 4, 2, 1};

    int ans = findPeakElement(arr);

    cout << "Index of peak element: " << ans << endl;

    return 0;
}


/*
    Input: arr = [0,10,5,2]
    Output: 1
*/