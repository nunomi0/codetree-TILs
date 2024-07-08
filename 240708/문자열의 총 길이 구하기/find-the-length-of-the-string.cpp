#include <iostream>
using namespace std;

string s;
int cnt=0;

int main() {

    for (int i = 0; i<10; i++){
        cin >> s;
        cnt += s.length();
    }
    
    cout << cnt;

    return 0;
}