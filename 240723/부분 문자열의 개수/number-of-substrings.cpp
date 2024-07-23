#include <iostream>
using namespace std;

string a,b;
int cnt=0;

int main() {
    cin >> a >> b;
    for (int i = 0; i<a.length()-b.length()+1; i++){
        bool check=1;
        for (int j = 0; j<b.length(); j++){
            if (a[i+j]!=b[j]) check=0;
        }
        if (check) cnt++;
    }
    cout << cnt;
    return 0;
}