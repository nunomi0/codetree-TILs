#include <iostream>
using namespace std;

string s;
char c;

int main() {
    cin >> s >> c;
    for (int i = 0; i<s.length(); i++){
        if (s[i]==c) {
            cout << i;
            return 0;
        }
    } 
    cout << "No";
    return 0;
}