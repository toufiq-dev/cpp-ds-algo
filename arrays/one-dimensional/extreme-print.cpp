#include <iostream>
#include <vector>
using namespace std;

void extremePrint(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    vector<int> ans;

    while(start < end) {
        ans.push_back(arr[start]);
        ans.push_back(arr[end]);

        start++;
        end--;        
    }

    for(auto c: ans) {
        cout << c << " ";
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

    int size = 8;

    extremePrint(arr, size);

    return 0;
}

// input: {1, 2, 3, 4, 5, 6, 7, 8}
// output: {1, 8, 2, 7, 3, 6, 4, 5}

