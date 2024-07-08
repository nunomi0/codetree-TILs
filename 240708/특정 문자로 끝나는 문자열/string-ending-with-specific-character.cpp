#include <iostream>
using namespace std;

string s[10];
char c;


int main() {
    for (int i = 0; i<10; i++) cin >> s[i];
    cin >> c;

    for (int i = 0; i<10; i++){
        if (s[i][s[i].length()-1]==c) cout << s[i] << '\n';
    }
    return 0;
}