#include <iostream>
using namespace std;

string s[10];


int main() {
    for (int i = 0; i<10; i++){
        cin >> s[i];
    }

    for (int i = 9; i>=0; i--){
        cout << s[i] << '\n';
    }

    return 0;
}