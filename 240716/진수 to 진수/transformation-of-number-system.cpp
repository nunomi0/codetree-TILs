#include <iostream>
using namespace std;

int a,b,num=0,tmp=1;
string n;


int main() {
    cin >> a >> b >> n;

    for (int i = 0; i<n.length(); i++){
        num=num*a+(n[i]-'0');
    }

    while (tmp<num) tmp*=b;
    tmp/=b;

    while (num!=0){
        cout << num/tmp;
        num%=tmp;
        tmp/=b;
    }
    if (num) cout << num;

    return 0;
}