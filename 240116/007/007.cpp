#include <iostream>
using namespace std;

pair<string,pair<string,int>> m;
string a,b;
int c;


int main() {
    cin >> m.first >> m.second.first >> m.second.second;
    cout << "secret code : " << m.first << '\n';
    cout << "meeting point : " << m.second.first << '\n';
    cout << "time : " << m.second.second << '\n';

    return 0;
}