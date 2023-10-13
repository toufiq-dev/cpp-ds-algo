#include <iostream>
using namespace std;

int main() {
  int arr[10];
  arr[0] = 99;
  arr[1] = 100;
  cout << "! " << *(arr + 2)  << endl;
  return 0;
}