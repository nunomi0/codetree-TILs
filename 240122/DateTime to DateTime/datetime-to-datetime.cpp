#include <iostream>
using namespace std;

int a,b,c;

int main() {
    cin >> a >> b >> c;
    cout << max(-1,(a-11)*60*24+(b-11)*60+(c-11));
    return 0;
}