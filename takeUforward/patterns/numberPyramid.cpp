#include <iostream>
using namespace std;

void numberPyramid(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << i + 1 << " ";
        }                                                   

        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the no. of rows: ";
    cin >> n;

    numberPyramid(n);
}