#include <iostream>
using namespace std;

string s;
int ans=0;
int cnt=1;

int main() {

    cin >> s;

    for (int i = s.length()-1; i>=0; i--){
        if (s[i]=='1') ans+=cnt;
        cnt*=2;
    }
    cout << ans;

    return 0;
}