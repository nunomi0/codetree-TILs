#include <iostream>
using namespace std;

int n,b,x=1;

int main() {

    cin >> n >> b;


    while (x<n) x*=b;
    x/=b;

    while (x!=0){
        cout << n/x;
        n%=x;
        x/=b;
    }

    return 0;
}