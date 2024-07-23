#include <iostream>
using namespace std;

string s,p;

int main() {
    cin >> s >> p;
    for (int i = 0; i<s.length()-p.length(); i++){
        bool check=1;
        for (int j = 0; j<p.length(); j++){
            if (s[i+j]!=p[j]) check=0;
        }
        if (check){
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}