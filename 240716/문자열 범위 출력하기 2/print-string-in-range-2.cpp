#include <iostream>
using namespace std;

string s;
int n;

int main() {

    cin >> s >> n;
    for (int i = 0; i<n; i++){
        cout << s[s.length()-1-i];
    }
    return 0;
}