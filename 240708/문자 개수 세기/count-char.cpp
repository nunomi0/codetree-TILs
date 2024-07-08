#include <iostream>
using namespace std;

string s;
char c;
int cnt=0;


int main() {
    getline(cin,s);
    cin >> c;

    for (int i = 0; i<s.length(); i++){
        if (s[i]==c) cnt++;
    }    

    cout << cnt;
    
    return 0;
}