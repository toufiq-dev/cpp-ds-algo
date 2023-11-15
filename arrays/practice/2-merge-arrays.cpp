#include <iostream>
#include <vector>
using namespace std;

// TC: O(|nums1| + |nums2|)
// SC: constant
vector<int> mergeArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int> result;
    int i = 0;
    int j = 0;

    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] < nums2[j]) {
            result.push_back(nums1[i]);
            i++;
        }
        else {
            result.push_back(nums2[j]);
            j++;
        }
    }

    // Add remaining elements from nums1 and nums2
    while (i < nums1.size()) {
        result.push_back(nums1[i]);
        i++;
    }
    while (j < nums2.size()) {
        result.push_back(nums2[j]);
        j++;
    }

    return result;
}

int main() {
    vector<int> arr1 = { 1, 3, 99 };
    vector<int> arr2 = { 2, 4 };

    vector<int> ans = mergeArrays(arr1, arr2);

    for (auto x : ans) {
        cout << x << " ";
    }

    return 0;
}

/*
    merge two sorted arrays into another sorted array

    Intuition: using two pointer approach we traverse the two vectors and compare two 
    elements from each vector, then put it on a new vector named result. 
    we traverse the remaining element of two vector(if any) and add them to the result.
*/