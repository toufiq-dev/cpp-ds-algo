#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int findUnique(vector<int> arr) {
    unordered_map<int, int> unique;

    int ans = 0, arrSize = arr.size();

    for(int i = 0; i < arrSize; i++) {
        unique[arr[i]]++;
    }

    for(auto en: unique) {
        if(en.second == 1) {
            ans = en.first;
        }
    }

    return ans;
}

int findUnique2(vector<int> arr) {
    int ans = 0, arrSize = arr.size();

    for(int i = 0; i < arrSize; i++) {
        ans = ans ^ arr[i]; // XOR Operation 
    }

    return ans;
}

int main() {
    vector<int> arr {1, 2, 4, 2, 1, 3, 6, 5, 5, 6, 4};

    int ans = findUnique2(arr);

    cout << "Ans: " << ans;

    return 0;
}

// input: {1, 2, 4, 2, 1, 3, 6, 5, 5, 6, 4}
// output: 3