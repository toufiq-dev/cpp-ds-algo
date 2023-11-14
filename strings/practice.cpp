#include <iostream>
#include <vector>
#include <string>
using namespace std;

string findReplaceString(string s, vector<int>& indices, vector<string>& sources, vector<string>& targets) {
  for(int i : indices) {
    if( s[i]== sources[i]) {
        s[i] = targets[i];
    }
  }

  return s;
}

int main() {
  // s = "abcd", indices = [0, 2], sources = ["a", "cd"], targets = ["eee", "ffff"] ans = "eeebffff"
  string s = "abcd";
  vector<int> indices = {0, 2};
  vector<string> sources = {"a", "cd"};
  vector<string> targets = {"eee", "ffff"};

  string ans = findReplaceString(s, indices, sources, targets);

  cout << ans;

  return 0;
}