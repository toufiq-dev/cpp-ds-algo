#include<iostream>
using namespace std;

void printRightTriangle(int rows) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << "* ";
        }

        cout << endl;
    }
}

int main() {
    int rows;
    cout << "Enter the no. of rows: ";
    cin >> rows;

    printRightTriangle(rows);
}