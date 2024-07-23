#include <iostream>
using namespace std;

string a,b;
int main() {
    cin >> a >> b;
    if (a+b==b+a) cout << "true";
    else cout << "false";
    return 0;
}