#include <iostream>
using namespace std;

int n, arr[110][110];

int main() {
    cin >> n;
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=n; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i<=n; i++){
        arr[i][0]=999999999;
        arr[0][i]=999999999;
    }
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=n; j++){
            arr[i][j]=min(arr[i][j],max(arr[i-1][j],arr[i][j-1]));
        }
    }
    cout << arr[n][n];
    return 0;
}