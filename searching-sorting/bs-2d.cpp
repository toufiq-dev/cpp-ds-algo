#include<iostream>
using namespace std;

bool binarySearch(int arr[][4], int rows, int cols, int target) {
    int start = 0;
    int end = rows * cols - 1;
    int mid;

    while(start <= end) {
        mid = start + (end - start) / 2;
        int rowIndex = mid / cols;
        int colIndex = mid % cols;

        if(arr[rowIndex][colIndex] == target) {
            cout << "Element found at: " << rowIndex << " " << colIndex << endl;
            return true;
        }
        
        if (arr[rowIndex][colIndex] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return false;
}

int main() {
   int arr[5][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
    {13, 14, 15, 16},
    {17, 18, 19, 20} };

    int rows = 5;
    int cols = 4;
    int target = 8;

    bool ans = binarySearch(arr, rows, cols, target);

    if(ans) {
        cout << "Found" << endl;
    } else {
        cout << "Not found" << endl;
    }

}