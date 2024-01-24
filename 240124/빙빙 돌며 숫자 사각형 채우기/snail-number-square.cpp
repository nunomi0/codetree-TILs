#include <iostream>
using namespace std;

int n,m;
int arr[110][110],d=0,x=0,y=0;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};


int main() {
    cin >> n >> m;
    for (int i = 1; i<=n*m; i++){
        arr[y][x]=i;
        int nx=x+dx[d];
        int ny=y+dy[d];
        if (!(0<=nx && nx<m && 0<=ny && ny<n) || arr[ny][nx]){
            d=(d+1)%4;
            nx=x+dx[d];
            ny=y+dy[d];
        }
        x=nx;
        y=ny;
    }

    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}