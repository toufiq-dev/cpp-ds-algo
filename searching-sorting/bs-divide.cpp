#include<iostream>
using namespace std;

int solve(int dividend, int divisor) {
    int start = 0;
    int end = abs(dividend);
    int ans = 0;
    int mid;

    while(start <= end) {
        mid = start + (end -start) / 2;

        if(abs(mid*divisor) == abs(dividend)) {
            ans = mid;
            break;
        }

        if(abs(mid * divisor) > abs(dividend)) {
            end = mid - 1;
        } else {
            ans = mid;
            start = mid + 1;

        }
    }

    if((dividend < 0 && divisor < 0) || (dividend > 0 && divisor > 0)) {
        return ans;
    } else {
        return -ans;
    }
}

int main() {
    int dividend = 65;
    int divisor = -4;

    int ans = solve(dividend, divisor);

    cout << "Ans is " << ans << endl;

    return 0;
}