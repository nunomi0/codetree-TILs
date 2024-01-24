#include <iostream>
using namespace std;

int n,arr[1010][1010],dir=0,dist=1,idx=2;
int dx[4]={0,-1,0,1};
int dy[4]={1,0,-1,0};


int main() {
    cin >> n;

    int x=n/2;
    int y=n/2;

    arr[x][y]=1;

    while (true){
        for (int i = 0; i<abs(dist); i++){
            if (x==n-1 && y==n-1) {
                for (int i = 0; i<n; i++){
                    for (int j = 0; j<n; j++){
                        cout << arr[i][j] << ' ';
                    }
                    cout << '\n';
                }
                return 0;
            }
            x+=dx[dir];
            y+=dy[dir];
            arr[x][y]=idx++;
        }
        
        dir=(dir+1)%4;

        if (dist<0) dist=abs(dist)+1;
        else dist*=-1;
    }
}