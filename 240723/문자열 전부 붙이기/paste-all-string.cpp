#include <iostream>
using namespace std;

int n;
string s, ans="";

int main() {
    cin >> n;
    for (int i = 0 ;i<n; i++){
        cin >> s;
        ans+=s;
    }
    cout << ans;
    return 0;
}