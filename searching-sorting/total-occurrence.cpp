#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// not working, will be solved later
int totalOccurrence(vector<int> arr, int target) {
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int count = 0;

    while(start <= end) {
        int element = arr[mid];

        if(element == target) {
            count++;
            start = mid + 1;
        } else if(target < element) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return count;
}

int totalOccurrence2(vector<int> arr, int target) {
    unordered_map<int, int> occurrence;
    int arrSize = arr.size() - 1;
    int count = 0;

    for(int i = 0; i < arrSize; i++) {
        occurrence[arr[i]]++;
    }

    for(auto entry: occurrence) {
        if(entry.first == target) {
            count = entry.second;
        }
    }

    return count;
}

int main() {
    vector<int> arr {1, 3, 4, 4, 4, 6, 6, 7, 7, 9};

    int ans = totalOccurrence2(arr, 4);

    if(ans) {
        cout << "No of count: " << ans;
    } else {
        cout << "Element not found!";
    }

    return 0;
}