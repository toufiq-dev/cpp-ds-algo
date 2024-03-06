#include <iostream>
#include <vector>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choose the last element as the pivot
    int i = (low - 1); // Index of smaller element

    for (int j = low; j <= high - 1; j++) {
        // If the current element is smaller than or equal to the pivot
        if (arr[j] <= pivot) {
            i++; // Increment the index of smaller element
            swap(arr[i], arr[j]); // Swap the elements
        }
    }
    swap(arr[i + 1], arr[high]); // Swap the pivot element with the greater element at i+1
    return (i + 1); // Return the partition index
}

// Function to perform the quicksort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Partition the array
        int partitionIndex = partition(arr, low, high);

        // Recursively sort the elements before and after the partition
        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
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