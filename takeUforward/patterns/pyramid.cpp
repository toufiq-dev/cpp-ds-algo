#include <iostream>
using namespace std;

void printPyramid(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = n - (i + 1); j >= 0; --j) {
            cout << " ";
        }

        for (int l = 1; l <= 2 * i + 1; ++l) {
            cout << "*";
        }

       

        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the no. of rows: ";
    cin >> n;

    printPyramid(n);
}