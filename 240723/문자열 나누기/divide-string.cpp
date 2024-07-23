#include <iostream>
using namespace std;

int n;
string s, ans="";
int main() {
    cin >> n;
    for (int i = 0 ; i<n; i++){
        cin >> s;
        ans+=s;
    }

    for (int i =0 ; i<ans.length(); i++){
        cout << ans[i];
        if (i>=4 && (i+1)%5==0) cout << '\n';
    }
    return 0;
}