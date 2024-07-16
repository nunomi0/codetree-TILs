#include <iostream>
#include <cmath>
using namespace std;

int n;
string s[20];
char c;
int cnt=0;
double avg=0;

int main() {

    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> s[i];
    }
    cin >> c;
    for (int i = 0; i<n; i++){
        if (s[i][0]==c){
            cnt++;
            avg+=s[i].length();
        }
    }

    cout << cnt << ' ';

    cout << fixed;
    cout.precision(2);
    cout << round(avg*100/cnt)/100;

    return 0;
}