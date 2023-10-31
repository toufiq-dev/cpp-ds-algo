#include <iostream>
#include <vector>
using namespace std;

vector<int> addTwo(vector<int> arr1, vector<int> arr2) {
  vector<int> ans;

  int sum, carry = 0;
  int i, j = 0;
  while(i < arr1.size() || j < arr2.size()) {
    if(i < 0) arr1[i] = 0;
    if(j < 0) arr2[j] = 0;

    sum = arr1[i] + arr2[j] + carry;

    if(sum >= 10) {
      carry = sum / 10;
      sum %= 10;
    } else {
      carry = 0;
    }

    ans.push_back(sum);
    i++, j++;
  }

  if(carry) ans.push_back(carry);

  return ans;
}

int main() {
  vector<int> arr1 = {9, 9, 9};
  vector<int> arr2 = {1};

  vector<int> ans = addTwo(arr1, arr2);

  for(auto x : ans) {
    cout << x << " ";
  }

  return 0;
}