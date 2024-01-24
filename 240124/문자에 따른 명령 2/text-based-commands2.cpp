#include <iostream>
using namespace std;

int x=0,y=0,n,cur=0;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
string s;

int main() {
    cin >> s;
    for (int i = 0; i<s.length(); i++){
        if (s[i]=='L') cur=(cur-1+4)%4;
        else if (s[i]=='R') cur=(cur+1+4)%4;
        else if (s[i]=='F') {
            x+=dx[cur];
            y+=dy[cur];
        }
    }
    cout << x << ' ' << y;
    return 0;
}