#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isEqual(string s, string l) {
  int pt1 = 0;
  int pt2 = 0;

  while(pt1 < s.size() and pt2 < l.size()) {
    if(s[pt1] == l[pt2])
      ++pt1, ++pt2;
    else
      break;
  }

  if(pt1 == s.size() and pt2 == l.size())
    return true;

  return false;
}

int main() {
  string s = "abcde";
  string l = "fabcde";

  bool ans = isEqual(s, l);
  cout << ans;

  return 0;
}