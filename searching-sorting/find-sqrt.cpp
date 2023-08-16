#include <iostream>
using namespace std;

int findSqrt(int n) {
    int start = 0;
    int end = n;
    int mid;
    int ans = -1;

    while(start <= end) {
        mid = start + (end - start) / 2;

        if(mid * mid == n) {
            return mid;
        }  
        
        if(mid * mid > n) {
            // left search
            end = mid - 1;
        } else {
            // store ans
            ans = mid;
            
            // right search
            start = mid + 1; 
        }

    }

    return ans;
}

int main() {
    int n;

    cout << "Enter the number: " ;
    cin >> n;

    int ans = findSqrt(n);

    cout << "Ans is: " << ans;

    return 0;
}