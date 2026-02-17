#include <bits/stdc++.h>
using namespace std;

string gcdStrings(string s1, string s2) {
    if (s1 + s2 != s2 + s1) {
        return "";
    }

    int gcdLen = __gcd(s1.length(), s2.length());
    return s1.substr(0, gcdLen);
}

int main() {
    string s1 = "LEET";
    string s2 = "CODE";

    string result = gcdStrings(s1, s2);
    cout << "GCD String: \"" << result << "\"" << endl;
    return 0;
}
