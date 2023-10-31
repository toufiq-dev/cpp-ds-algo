#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> arr1 = {9, 9, 9, 9};
  vector<int> arr2 = {1};

  vector<int> ans;

  int sum, carry = 0;

  int i = arr1.size() - 1, j = arr2.size() - 1;

  while(i >= 0 || j >= 0) {
    if(i < 0) arr1[i] = 0;
    if(j < 0) arr2[j] = 0;

    sum = arr1[i] + arr2[j] + carry;

    if(sum >= 10) {
      carry = sum / 10;
      sum %= 10;
    }

    ans.push_back(sum);
    i--;
    j--;
  }

  ans.push_back(carry);

  for(int i = ans.size() - 1; i >= 0; i--) {
    cout << ans[i] << " ";
  }

  return 0;
}