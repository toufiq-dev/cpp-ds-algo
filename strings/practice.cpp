#include <iostream>
#include <string>
using namespace std;

bool compare(string &s1, string &s2) {
    int i = 0, j = 0;
    while(i < s1.size() || j < s2.size()) {
        if(s1[i] != s2[j])
            return false;
        
        ++i;
        ++j;
    }

    return true;
}

int main() {
    string s1 = "Alice";
    string s2 = "Alicev";
    bool ans = compare(s1, s2);

    cout << ans;

    return 0;
}