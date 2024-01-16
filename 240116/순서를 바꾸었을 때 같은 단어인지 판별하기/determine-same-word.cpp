#include <iostream>
#include <algorithm>
using namespace std;

int n;
string a,b;


int main() {
    cin >> a >> b;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if (a==b) cout << "Yes";
    else cout << "No";
    return 0;
}