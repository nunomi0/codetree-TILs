#include <iostream>
using namespace std;

string a;
int ans=0;

int main() {
    cin >> a;
    for (int i = 0; i<a.length(); i++){
        if (a[i]=='('){
            for (int j = i+1; j<a.length(); j++){
                if (a[j]==')') ans++;
            }
        }
    }
    cout << ans;
    return 0;
}