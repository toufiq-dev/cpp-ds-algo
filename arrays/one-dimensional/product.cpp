#include <iostream>
#include <vector>
using namespace std;

vector<int> findProduct(const vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n, 1);

    // Calculate the product of all elements to the left
    int leftProduct = 1;
    for (int i = 0; i < n; i++) {
        result[i] *= leftProduct;
        leftProduct *= arr[i];
    }

    // Calculate the product of all elements to the right and multiply it with the left product
    int rightProduct = 1;
    for (int i = n - 1; i >= 0; i--) {
        result[i] *= rightProduct;
        rightProduct *= arr[i];
    }

    return result;
}

int main() {
    vector<int> arr = {1, 2, 3, 4};

    vector<int> ans = findProduct(arr);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}
