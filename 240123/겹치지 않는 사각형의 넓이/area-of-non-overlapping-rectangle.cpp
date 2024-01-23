#include <iostream>
using namespace std;

int a[3][4]; // x1, x2, y1, y2
int arr[2010][2010];
int ans=0;

int main() {
    for (int i = 0; i<3; i++){
        for (int j = 0; j<4; j++){
            cin >> a[i][j];
        }
    }

    for (int i = 0; i<2; i++){
        for (int x = a[i][0]; x<a[i][2]; x++){
            for (int y = a[i][1]; y<a[i][3]; y++){
                arr[x+1000][y+1000]++;
            }
        }
    }

    for (int x = 0; x<=2000; x++){
        for (int y = 0; y<=2000; y++){
            if (arr[x][y]) ans++;
        }
    }

    for (int x = a[2][0]; x<a[2][2]; x++){
        for (int y = a[2][1]; y<a[2][3]; y++){
            if (arr[x+1000][y+1000]) ans--;
        }
    }
    cout << ans;
   return 0;
}