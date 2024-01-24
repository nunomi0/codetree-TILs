#include <iostream>
using namespace std;

int n,arr[110][110],nx,ny,ans=0;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};


int main() {
    cin >> n;
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            int cnt=0;
            for (int k = 0; k<4; k++){
                nx=i+dx[k];
                ny=j+dy[k];
                if (0<=nx && nx<n && 0<=ny && ny<n && arr[nx][ny]) cnt++;
            }
            if (cnt>=3) ans++;
        }
    }

    cout << ans;
    return 0;
}