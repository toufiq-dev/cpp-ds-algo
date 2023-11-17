#include<iostream>
#include<vector>
using namespace std;

class Solution {
public: 
    int maxProduct (vector<int> &nums) {
        vector<int> products;
        for (int i = 0; i < nums.size(); ++i) {
            int product;
            for (int j = i + 1; j < nums.size(); ++j) {
                product = nums[i] * nums[j];
                products.push_back(product);
            }
        }
    }
};

int main () {
    vector<int> arr = {2, 3, -2, 4};

}