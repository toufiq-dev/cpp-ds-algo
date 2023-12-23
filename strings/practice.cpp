#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    vector<string> strs = {"flower", "flow", "flight"};

    string prefix = strs[0]; // prefix = "flower"

    for (auto &str : strs) {
    // Find the longest common prefix of the current string and the prefix.
        string new_prefix = "";

        for (int i = 0; i < min(prefix.size(), str.size()); i++) {
            if (prefix[i] == str[i]) {
                new_prefix += prefix[i];
            } else {
                break;
            }
        }

        // Update the prefix with the new common prefix.
        prefix = new_prefix;
    }

    // Return the prefix.
    string longest_common_prefix = prefix;

    cout << longest_common_prefix << endl;

    return 0;
}