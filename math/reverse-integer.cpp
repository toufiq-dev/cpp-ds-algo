#include <iostream>
#include <limits.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int result = 0;
        bool isNegative = false;

        if(x <= INT_MIN) {
            return 0;
        }

        if(x < 0) {
            isNegative = true;
            x = -x;
        }

        while(x > 0) {
            if(result > INT_MAX / 10) {
                return 0;
            }

            int digit = x % 10;
            result = result * 10 + digit;
            x /= 10;
        }

        return isNegative? -result : result;
    }
};

int main() {
    Solution sln;

    int ans = sln.reverse(123456789);

    cout << ans;

    return 0;
}