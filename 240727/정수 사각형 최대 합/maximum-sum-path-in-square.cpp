#include <iostream>
using namespace std;

int n, arr[110][110];

int main() {
    cin >> n;
    for (int i = 0; i<=n; i++){
        for (int j = 0 ; j<=n; j++){
            arr[i][j]=0;
        }
    }
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=n; j++){
            cin >> arr[i][j];
            arr[i][j]+=max(arr[i-1][j], arr[i][j-1]);
        }
    }
    cout << arr[n][n];
    return 0;
}