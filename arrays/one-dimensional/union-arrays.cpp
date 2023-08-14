#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> unionOfArrays(vector<int> arr, vector<int> brr) {
    vector<int> ans;

    int arrSize = arr.size();
    int brrSize = brr.size();

    for(int i = 0; i < arrSize; i++) {
        ans.push_back(arr[i]);

        for(int j = 0; j < brrSize; j++) {
            if(arr[i] == brr[j]) {
                brr[j] = -1;
            }
        }
    }

    for(int j = 0; j < brrSize; j++) {
        if(brr[j] > 0) {
            ans.push_back(brr[j]);
        }
    }

    return ans;
}

vector<int> unionOfArrays2(vector<int> arr, vector<int> brr) {
    vector<int> ans;
    unordered_map<int, int> unions; 

    int arrSize = arr.size();
    int brrSize = brr.size();

    for(int i = 0; i < arrSize; i++) {
        unions[arr[i]]++;
    }

    for(int j = 0; j < brrSize; j++) {
        unions[brr[j]]++;
    }

    for(auto entry: unions) {
        // cout << "Key: " << entry.first << " value:  " << entry.second << endl;
        // if(entry.second == 1) {
        //     ans.push_back(entry.first);
        // }

        ans.push_back(entry.first);
    }

    return ans;
}

int main() {
    vector<int> arr {2, 4, 7, 8};
    vector<int> brr {1, 2, 5, 9};

    vector<int> ans = unionOfArrays2(arr, brr);

    for(auto x: ans) {
        cout << x << " ";
    }
}

// input: {2, 4, 7, 8}, {1, 2, 5, 9}
// output: {2, 4, 7, 8, 1, 5, 9}