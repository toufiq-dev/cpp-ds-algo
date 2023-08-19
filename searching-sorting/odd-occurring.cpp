#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> arr) {
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while(start <= end) {
        if(start == end) {
            // single element 
            return start;
        } 
    }
}

int main() {
    vector<int> arr {1, 1, 2, 2, 3, 3, 4, 4, 3, 600, 600, 4};

    int ans = solve(arr);

    cout << "Ans is: " << ans << endl;

    return 0;
}


/*
    Find the odd occuring element in an array

    all repeating occurrence of element appear in pairs
    and pairs are not adjacent.

*/