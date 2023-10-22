#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeArrays(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> merged;
    int i = 0; // Pointer for arr1
    int j = 0; // Pointer for arr2

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            merged.push_back(arr1[i]);
            i++;
        } else {
            merged.push_back(arr2[j]);
            j++;
        }
    }

    // If there are remaining elements in arr1 or arr2, add them to the merged array
    while (i < arr1.size()) {
        merged.push_back(arr1[i]);
        i++;
    }

    while (j < arr2.size()) {
        merged.push_back(arr2[j]);
        j++;
    }

    return merged;
}

int main() {
    vector<int> arr1 = {1, 3, 4, 5, 9}; 
    vector<int> arr2 = {2, 6, 7, 8};

    vector<int> ans = mergeArrays(arr1, arr2);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}
