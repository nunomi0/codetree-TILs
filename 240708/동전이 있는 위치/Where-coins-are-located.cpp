#include <iostream>
using namespace std;

int n,m,r,c,arr[20][20];


int main() {

    cin >> n >> m;
    for (int i = 0; i<m; i++){
        cin >> r >> c;
        arr[r][c]=1; 
    }

    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=n; j++){
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}