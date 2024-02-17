#include <iostream>
using namespace std;

void printRectangle(int row) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < row; ++j) {
            cout << "* ";
        }

        cout << endl;
    }
}

int main() {
    int row;
    cout << "Enter no of rows: ";
    cin >> row;

    printRectangle(row);
}

/*

Example 1:
Input: N = 3
Output: 
* * *
* * *
* * *

*/