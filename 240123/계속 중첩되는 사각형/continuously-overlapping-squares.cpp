#include <iostream>
using namespace std;

int n, a[20][4], arr[210][210], ans=0;

int main() {

    cin >> n;

    for (int i = 0; i<n; i++){
        for (int j = 0; j<4; j++){
            cin >> a[i][j];
        }
        for (int x = a[i][0]; x<a[i][2]; x++){
            for (int y = a[i][1]; y<a[i][3]; y++){
                arr[x+100][y+100]=i%2;
            }
        }
    }

    for (int i = 0; i<=200; i++){
        for (int j = 0; j<=200; j++){
            if (arr[i][j]) ans++;
        }
    }

    cout << ans;
    
    return 0;
}