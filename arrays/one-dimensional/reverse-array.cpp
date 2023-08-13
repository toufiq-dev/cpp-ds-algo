#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    reverseArray(arr, size);

    return 0;
}

// input: {10, 20, 30, 40, 50, 60}
// output: {60, 50, 40, 30, 20, 10}

