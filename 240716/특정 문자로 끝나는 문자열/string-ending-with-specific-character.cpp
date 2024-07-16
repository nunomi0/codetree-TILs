#include <iostream>
using namespace std;

string s[10];
char c;
bool none=1;


int main() {

    for (int i = 0; i<10; i++){
        cin >> s[i];
    }
    cin >> c;

    for (int i = 0; i<10; i++){
        if (s[i][s[i].length()-1]==c) {
            none=0;
            cout << s[i] << '\n';
        }
    }
    if (none) cout << "None";

    return 0;
}