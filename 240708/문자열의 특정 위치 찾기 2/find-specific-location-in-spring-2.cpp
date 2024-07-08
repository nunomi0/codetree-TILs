#include <iostream>
using namespace std;

string s[5]={"apple","banana","grape","blueberry","orange"};
char c;
int cnt=0;

int main() {

    cin >> c;
    for (int i = 0; i<5; i++){
        if (s[i][2]==c || s[i][3]==c){
            cout << s[i] << '\n';
            cnt++;
        }
    }

    cout << cnt;
    
    return 0;
}