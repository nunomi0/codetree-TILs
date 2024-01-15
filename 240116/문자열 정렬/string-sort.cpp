#include <iostream>
#include <algorithm>
using namespace std;

string s;
char arr[110];


int main() {
    cin >> s;
    for (int i = 0; i<s.length(); i++){
        arr[i]=s[i];
    }
    sort(arr,arr+s.length());
    for (int i = 0; i<s.length(); i++){
        cout << arr[i];
    }
    return 0;
}