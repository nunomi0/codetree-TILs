#include <iostream>
using namespace std;

string s1, s2;


int main() {

    cin >> s1 >> s2;
    if (s1.length()>s2.length()) cout << s1 << ' ' << s1.length();
    else cout << s2 << ' ' << s2.length();
    
    return 0;
}