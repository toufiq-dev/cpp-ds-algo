#include <iostream>
using namespace std;

int getMaximum(int arr[], int size) {
    int number = INT_MIN;
    
    for(int i = 0; i < size; i++) {
        if(arr[i] > number) {
            number = arr[i];
        }
    }

    return number;
}

int main() {
    int arr[] = {70, 10, 20, 30, 40, 90, 50};
    int size = 7;

    int ans = getMaximum(arr, size);

    cout << "Maximum number in the array: " << ans << endl;

    return 0;
}