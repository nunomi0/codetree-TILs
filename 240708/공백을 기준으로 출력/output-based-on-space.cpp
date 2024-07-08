#include <iostream>
using namespace std;

string s;


int main() {
    for (int i = 0; i<2; i++){
        getline(cin,s);
        for (int j = 0; j<s.length(); j++){
            if (s[j]==' ') continue;
            cout << s[j];
        }
    }
    return 0;
}