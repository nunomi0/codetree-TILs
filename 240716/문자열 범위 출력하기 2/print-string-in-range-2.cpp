#include <iostream>
using namespace std;

string s;
int n;

int main() {

    cin >> s >> n;
    int l = s.length();
    for (int i = 0; i<min(l,n); i++){
        cout << s[s.length()-1-i];
    }
    return 0;
}