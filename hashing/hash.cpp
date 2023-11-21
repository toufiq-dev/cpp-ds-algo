// String Hashing
#include <bits/stdc++.h>
using namespace std;

vector<long long> pH, po;
const int BASE = 257;
const int MOD = 1000000007;

/// O(|s|)
void preprocess(string &s)
{
    pH.resize(s.size() + 1);
    po.resize(s.size() + 1);
    pH[0] = s[0];
    po[0] = 1;
    for (int i = 1; i < s.size(); i++)
    {
        pH[i] = (pH[i - 1] * BASE) + s[i];
        if (pH[i] >= MOD) pH[i] %= MOD;

        po[i] = (po[i - 1] * BASE); /// BASE^i = BASE^(i - 1) * BASE
        if (po[i] >= MOD) po[i] %= MOD; /// [0, MOD - 1]
    }
}

long long getHash(int L, int R)
{
    if (L == 0) return pH[R];
    /// pH[R] - (pH[L - 1) * po[R - L + 1])
    long long A = pH[R];
    long long B = (pH[L - 1] * po[R - L + 1]) % MOD;
    return (A - B + MOD) % MOD; /// A < B
}
/// -9, -4, 1, 6, 11, 16, 21, 26, ...
/// 1, 1, 1, 1, 1, 1, 1, 1, ...

int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;
    preprocess(s);
    while(true)
    {
        int L, R;
        cin >> L >> R;
        cout << s.substr(L, R - L + 1) << " " << getHash(L, R) << "\n";
    }
    return 0;
}