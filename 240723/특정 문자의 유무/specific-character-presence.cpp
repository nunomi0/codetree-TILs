#include <iostream>
using namespace std;

string s, ee="No", ab="No";

int main() {
    cin >> s;
    for (int i = 0; i<s.length()-1; i++){
        if (s[i]=='e' && s[i+1]=='e') ee="Yes";
        else if (s[i]=='a' && s[i+1]=='b') ab="Yes";
    }
    cout << ee << ' ' << ab;
    return 0;
}