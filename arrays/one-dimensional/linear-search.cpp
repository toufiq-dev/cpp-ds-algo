#include <iostream>
using namespace std;

void linearSearch(int arr[], int size, int target) {
    bool flag;

    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            flag = true;
            cout << "Target found at positon: " << i << endl;
            break;
        }
    }

    if(!flag) {
        cout << "Target not found in the array";
    }

}

int main() {
    int arr[7] = {2, 9, 6, 7, 4, 12, 15};
    int size = 7;

    linearSearch(arr, size, 1);

    return 0;
}