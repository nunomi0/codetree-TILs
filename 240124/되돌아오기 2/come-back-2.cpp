#include <iostream>
using namespace std;

int x=0,y=0,d=0;
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
string s;

int main() {
    cin >> s;
    for (int i = 0; i<s.length(); i++){
        if (s[i]=='L') d=(d+3)%4;
        else if (s[i]=='R') d=(d+1)%4;
        else if (s[i]=='F') {
            x+=dx[d];
            y+=dy[d];
            if (x==0 && y==0) {
                cout << i+1;
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}