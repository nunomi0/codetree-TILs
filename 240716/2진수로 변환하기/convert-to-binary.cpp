#include <iostream>
using namespace std;

int n,tmp=1;

int main() {
    cin >> n;
    while (tmp<n) tmp*=2;
    tmp/=2;

    while (tmp!=0){
        cout << n/tmp;
        n%=tmp;
        tmp/=2;
    }
    if (n) cout << n;
    return 0;
}