#include <iostream>
using namespace std;

int n,m,r,c,arr[110][110];
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};


int main() {
    cin >> n >> m;
    for (int i = 0; i<m; i++){
        cin >> r >> c;
        arr[r][c]=1;
        int cnt=0;
        for (int j = 0; j<4; j++){
            int nx=r+dx[j];
            int ny=c+dy[j];
            if (0<nx && nx<=n && 0<ny && ny<=n && arr[nx][ny]) cnt++;
        }
        if (cnt==3) cout << 1 << '\n';
        else cout << 0 << '\n';
    }
    return 0;
}