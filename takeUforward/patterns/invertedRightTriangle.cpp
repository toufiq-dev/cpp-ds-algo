#include <iostream>
using namespace std;

void invertedRightTriangle(int n) {
    for (int i = n; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            cout << j + 1 << " ";
        }

        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the no. of rows: ";
    cin >> n;

    invertedRightTriangle(n);
}