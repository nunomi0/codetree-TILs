#include <iostream>
#include <map>
using namespace std;

int n,d,cnt=0,x=0,y=0;
int dx[4]={0,-1,0,1};
int dy[4]={-1,0,1,0};
char c;
string s="WSEN";
map<char,int> m;


int main() {
    for (int i = 0; i<4; i++) m[s[i]]=i;

    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> c >> d;
        while (d--){
            x+=dx[m[c]];
            y+=dy[m[c]];
            cnt++;
            if (x==0 && y==0) {
                cout << cnt;
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}