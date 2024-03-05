#include <iostream>
using namespace std;

int myStoi(const string& str) {
    int result = 0;
    int sign = 1;  // To handle negative numbers

    // Skip leading whitespaces
    size_t i = 0;
    while (i < str.length() && isspace(str[i])) {
        i++;
    }

    // Check for the sign
    if (str[i] == '-') {
        sign = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    // Iterate through each character and convert to integer
    while (i < str.length() && isdigit(str[i])) {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return result * sign;
}

int main() {
    string numStr = "9287";
    int result = myStoi(numStr);

    cout << "Converted integer: " << result << endl;

    return 0;
}
