// string hashing
#include <bits/stdc++.h>
using namespace std;

// prefix hash, power of base
vector<long long> pH, pB;
const int BASE = 257;
const int MOD = 1000000007;

/// O(|s|)
void preprocess(string &s) {
    pH.resize(s.size() + 1);
    pB.resize(s.size() + 1);
    pH[0] = s[0];
    pB[0] = 1;

    for (int i = 1; i < s.size(); i++) {
        pH[i] = (pH[i - 1] * BASE) + s[i];
        if(pH[i] >= MOD)
            pH[i] %= MOD;
        
        pB[i] = pB[i - 1] * BASE; /// BASE^i = BASE^(i - 1) * BASE
        if(pB[i] >= MOD)
            pB[i] %= MOD;
    }
}

long long getHash(int L, int R) {
    if(L == 0)
        return pH[R];
    
    long long A = pH[R];
    long long B = pH[L - 1] * pB[R - L + 1] > MOD 
                        ? pH[L - 1] * pB[R - L + 1] % MOD 
                        : pH[L - 1] * pB[R - L + 1];
                        
    return (A - B + MOD) % MOD; /// A < B
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    preprocess(s);

    while(true) {
        int L, R;
        cin >> L >> R;
        cout << s.substr(L, R - L + 1) << "  " << getHash(L, R) << '\n';
    }

    return 0;
}