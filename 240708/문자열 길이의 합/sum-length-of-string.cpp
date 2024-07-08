#include <iostream>
using namespace std;

int n, cnt=0, aCnt=0;
string s;


int main() {
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> s;
        cnt+=s.length();
        if (s[0]=='a') aCnt++;
    }
    cout << cnt << ' ' << aCnt;
    return 0;
}