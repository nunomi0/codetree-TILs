#include <iostream>
using namespace std;

int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int n,t,arr[110][110],d=0,ans=0;
string s;

int main() {
    cin >> n >> t >> s;
    int x=n/2;
    int y=n/2;
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    ans+=arr[x][y];
    for (int i = 0; i<s.length(); i++){
        if (s[i]=='L') d=(d-1+4)%4;
        else if (s[i]=='R') d=(d+1)%4;
        else if (s[i]=='F') {
            int nx = x+dx[d];
            int ny = y+dy[d];
            if (0<=nx && nx<n && 0<=ny && ny<n){
                x=nx;
                y=ny;
                ans+=arr[x][y];
            }
        }
    }

    cout << ans;
    return 0;
}