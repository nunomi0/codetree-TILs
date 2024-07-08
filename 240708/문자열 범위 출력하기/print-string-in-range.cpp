#include <iostream>
#include <string>
using namespace std;

string s;


int main() {
    getline(cin,s);
    cout << s.substr(2,8);
    return 0;
}