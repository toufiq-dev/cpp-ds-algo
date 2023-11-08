#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isValid(string s) {
    stack<char> stk;

    for(auto c : s) {
        if(c == '(') stk.push(c);
        else if (c == ")") stk.pop();
        else if (c == '[') stk.push(c);
        else if (c == ']') stk.pop();
        else if (c == '{') stk.push(c);
        else stk.pop();
    }

    if (stk.empty()) return true;

    return false;
}

int main() {
    string s = "()[]{}";
    auto ans = isValid(s);

    cout << ans << endl;

    return 0;
}
