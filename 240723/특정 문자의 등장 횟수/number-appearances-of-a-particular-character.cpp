#include <iostream>
using namespace std;

string s;
int ee=0,eb=0;

int main() {
    cin >> s;
    for (int i = 0 ; i<s.length()-1; i++){
        if (s[i]=='e'){
            if (s[i+1]=='e') ee++;
            else if (s[i+1]=='b') eb++;
        }
    }
    cout << ee << ' ' << eb;
    return 0;
}