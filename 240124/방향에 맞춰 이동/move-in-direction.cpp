#include <iostream>
#include <map>
using namespace std;

int n,x=0,y=0,dist;
char dir;
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
map<char,int> m;

int main() {

    string s="WSNE";
    for (int i = 0; i<4; i++) m[s[i]]=i;

    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> dir >> dist;
        x+=dx[m[dir]]*dist;
        y+=dy[m[dir]]*dist;
    }
    
    cout << x << ' ' << y;
    return 0;
}