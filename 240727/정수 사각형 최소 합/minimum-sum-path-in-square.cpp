#include <iostream>
using namespace std;

int n, arr[110][110];

int main() {
    cin >> n;
    
    for (int i  = 1; i<=n; i++){
        for (int j = 1; j<=n; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i<=n; i++){
        for (int j = n; j>0; j--){
            if (i==1) arr[i][j]+=arr[i][j+1];
            else arr[i][j]+=min(arr[i-1][j], arr[i][j+1]);
        }
    }

    cout << arr[n][1];
    return 0;
}