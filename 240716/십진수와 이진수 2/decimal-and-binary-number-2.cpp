#include <iostream>
using namespace std;

string n;
int num=0;
int tmp=1;


int main() {

    cin >> n;

    for (int i = 0 ; i<n.length(); i++){
        num=num*2+(n[i]-'0');
    }

    num*=17;


    while (tmp<num) tmp*=2;
    tmp/=2;

    while (tmp!=0){
        cout << num/tmp;
        num%=tmp;
        tmp/=2;
    }

    return 0;  
}