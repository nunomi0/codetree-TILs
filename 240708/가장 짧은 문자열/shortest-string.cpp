#include <iostream>
using namespace std;

string a,b,c;

int main() {

    cin >> a >> b >> c;
    cout << max(a.length(),max(b.length(),c.length()))-min(a.length(),min(b.length(),c.length()));

    return 0;
}