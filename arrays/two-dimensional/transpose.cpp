#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>> arr) {
    int rows = arr.size();
    int cols = arr[0].size(); 

    vector<vector<int>> ans(cols, vector<int>(rows));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            ans[j][i] = arr[i][j];
        }
    }

    return ans;
}

int main() {
    vector<vector<int>> arr = {
        {1, 2, 3},
        {1, 3, 7}
    };

    vector<vector<int>> ans = transpose(arr);

    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
