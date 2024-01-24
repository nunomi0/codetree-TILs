#include <iostream>
#include <map>
using namespace std;

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int n,t,r,c,cur;
char d;
map<char,int>m;
string s="DRUL";

int main() {
    for (int i = 0; i<4; i++) m[s[i]]=i;

    cin >> n >> t >> r >> c >> d;
    cur=m[d];

    while (t--){
        int nx=r+dy[cur];
        int ny=c+dx[cur];
        if (!(0<nx && nx<=n && 0<ny && ny<=n)) cur=(cur+2)%4;
        else {
            r=nx;
            c=ny;
        }
    }
    cout << r << ' ' << c;
    return 0;
}