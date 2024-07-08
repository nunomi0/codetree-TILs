#include <iostream>
using namespace std;

string s;


int main() {

    for (int i = 0; i<10; i++){
        cin >> s;
        if (i%2==0) cout << s << '\n';
    }
    return 0;
}